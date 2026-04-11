#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

#ifdef _WIN32
#include <windows.h>
#endif

// Renk Kodları -Renk Kodlarında Yapay Zekadan Destek Alınmıştır-
#define RED     "\033[1;31m"
#define GREEN   "\033[1;32m"
#define YELLOW  "\033[1;33m"
#define BLUE    "\033[1;34m"
#define CYAN    "\033[1;36m"
#define RESET   "\033[0m"

struct soru {
    char Soru[500];
    char A[50], B[50], C[50], D[50];
    int zorluk;
    char DogruCevap;
};

// Windows'ta renklerin aktif olması için gerekli fonksiyon
void renkleri_aktif_et() {
#ifdef _WIN32
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    DWORD dwMode = 0;
    GetConsoleMode(hOut, &dwMode);
    dwMode |= 0x0004; // ENABLE_VIRTUAL_TERMINAL_PROCESSING
    SetConsoleMode(hOut, dwMode);
#endif
}

int main() {
    renkleri_aktif_et(); // Program baslarken renk destegini ac
    srand(time(NULL));

    int derece = 1, odulhavuzu = 0, i = 0, joker_yuzde50 = 1;
    struct soru SoruHavuzu[25];
    char satir[512], cevap;
    time_t baslangic_zamani, bitis_zamani;

    FILE *dosya = fopen("sorular.txt", "r");
    if (dosya == NULL) {
        printf(RED "Hata: sorular.txt bulunamadi!\n" RESET);
        return 1;
    }

    while (fgets(satir, sizeof(satir), dosya) && i < 25) {
        char* token=strtok(satir,";");//Burada Token ile herhangi bir null dönmesi halinde soru atlama mekanizması yaptık
        if (!token)continue;//aksi takdirde txt dosyasında hata varsa program çöküş yaşardı
        strcpy(SoruHavuzu[i].Soru,token);
        token=strtok(NULL,";");
        if (!token)continue;
        strcpy(SoruHavuzu[i].A,token);
        token=strtok(NULL, ";");
        if (!token)continue;
        strcpy(SoruHavuzu[i].B,token);
        token=strtok(NULL, ";");
        if (!token)continue;
        strcpy(SoruHavuzu[i].C,token);
        token=strtok(NULL, ";");
        if (!token)continue;
        strcpy(SoruHavuzu[i].D,token);
        token=strtok(NULL, ";");
        if (!token)continue;
        SoruHavuzu[i].DogruCevap = token[0];
        token=strtok(NULL, ";");
        if (!token)continue;
        SoruHavuzu[i].zorluk = atoi(token);
        i++;
    }
    fclose(dosya);

    printf(CYAN "--- KIM MILYONER OLMAK ISTER BASLADI ---\n" RESET);

    while (derece <= 5) {
        int rIndeks = (rand() % 5) + (derece - 1) * 5;

        printf(CYAN "\n====================================================\n" RESET);
        printf(YELLOW "SORU %d | Mevcut Odul: %d TL\n" RESET, derece, odulhavuzu);
        printf(BLUE "SORU: %s\n" RESET, SoruHavuzu[rIndeks].Soru);
        printf("A) %-20s B) %-20s\n", SoruHavuzu[rIndeks].A, SoruHavuzu[rIndeks].B);
        printf("C) %-20s D) %-20s\n", SoruHavuzu[rIndeks].C, SoruHavuzu[rIndeks].D);
        printf(CYAN "[W]: Cekil | [J]: Joker (%s)\n" RESET, joker_yuzde50 ? "AKTIF" : "BITTI");
        printf(RED "SURE: 30 Saniye!\n" RESET);

        baslangic_zamani = time(NULL);
        printf("\nCevabiniz: ");
        scanf(" %c", &cevap);
        cevap = toupper(cevap);
        bitis_zamani = time(NULL);

        double gecen_sure = difftime(bitis_zamani, baslangic_zamani);

        if (gecen_sure > 30) {
            printf(RED "\nSURE DOLDU! (%.0f saniye)\n" RESET, gecen_sure);
            printf("Elendiniz. Teselli Odulu: %d TL\n", (odulhavuzu * 20) / 100);
            break;
        }

        if (cevap == 'W') {
            int cekilme = (odulhavuzu * 40) / 100;
            printf(YELLOW "\nYarismadan cekildiniz. Kazanciniz: %d TL\n" RESET, cekilme);
            break;
        }

        if (cevap == 'J' && joker_yuzde50) {
            joker_yuzde50 = 0;
            char yalanci;
            do {
                yalanci = "ABCD"[rand() % 4];
            } while (yalanci == SoruHavuzu[rIndeks].DogruCevap);

            printf(GREEN "\n[JOKER]: %c veya %c arasinda secim yapin!\n" RESET,
                   SoruHavuzu[rIndeks].DogruCevap, yalanci);
            printf("Son karariniz nedir?: ");
            scanf(" %c", &cevap);
            cevap = toupper(cevap);
        }

        if (cevap == SoruHavuzu[rIndeks].DogruCevap) {
            odulhavuzu += 200000;
            printf(GREEN "\nDOGRU! +200.000 TL kazandiniz.\n" RESET);
            if (derece == 5) {
                printf(YELLOW "\n*** TEBRIKLER MILYONER OLDUNUZ! ***\n" RESET);
                break;
            }
            derece++;
        } else {
            printf(RED "\nYANLIS! Dogru cevap %c idi.\n" RESET, SoruHavuzu[rIndeks].DogruCevap);
            printf("Teselli Odulu: %d TL\n", (odulhavuzu * 20) / 100);
            break;
        }
    }
    printf(CYAN "\nKatildigin icin tesekkurler!\n" RESET);
    return 0;
}
