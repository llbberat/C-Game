#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int random, i = 0, can = 6;
    char secim[20], harf;
    char kelime[20];

    char arraymeyve[10][12] = {"elma","kivi","armut","avakado","ananas","mandalina","portakal","kumkat","incir","alıç"};
    char arrayterim[10][12] = {"zehir","zarf","yüklem","tümleme","kimya","felsefe","antrenör","hipotalamus","miyelin","spor"};
    char arrayşair[6][20] = {"can yucel","peyami safa","nazim hikmet","turgut uyar","edip cansever","cemal sureya"};

    printf("\nOyun turunu seciniz (meyve-sair-terim): ");
    scanf("%s", secim);

    if (strcmp(secim, "meyve") == 0) {
        random = rand() % 10;
        strcpy(kelime, arraymeyve[random]);
    }
    else if (strcmp(secim, "terim") == 0) {
        random = rand() % 10;
        strcpy(kelime, arrayterim[random]);
    }
    else if (strcmp(secim, "sair") == 0) {
        random = rand() % 6;
        strcpy(kelime, arrayşair[random]);
    }
    else {
        printf("Gecersiz secim!\n");
        return 0;
    }

    i = strlen(kelime);//kelime uzunluğunu belirliyoruz
    char guess[i + 1];

    for (int j = 0; j < i; j++) {
        if (kelime[j] == ' ') guess[j] = ' ';
        else guess[j] = '_';
        printf("%c ", guess[j]);
    }
    guess[i] = '\0';

    while (can > 0) {
        printf("\n\nKalan Can: %d", can);
        printf("\nLutfen harf giriniz: ");
        scanf(" %c", &harf);

        int dogruMu = 0;
        for (int j = 0; j < i; j++) {
            if (kelime[j] == harf) {
                if (guess[j] == '_') { // Eğer harf daha önce açılmamışsa
                    guess[j] = kelime[j];
                    dogruMu = 1;
                } else {
                    dogruMu = 2; // Zaten açılmış harf
                }
            }
        }

        if (dogruMu == 1) {
            printf("Dogru tahmin!");
        } else if (dogruMu == 2) {
            printf("Bu harfi zaten bildiniz.");
        } else {
            can--; // Yanlış tahminde can azalt
            printf("Yanlis tahmin! Caniniz azaldi.");
        }

        printf("\nKelime: ");
        for (int j = 0; j < i; j++) {
            printf("%c ", guess[j]);
        }

        if (strcmp(guess, kelime) == 0) {
            printf("\n\nTebrikler!! Kelimeyi buldunuz: %s\n", kelime);
            break;
        }
    }

    if (can == 0) {
        printf("\n\nMaalesef caniniz bitti! Kaybettiniz.");
        printf("\nDogru kelime: %s\n", kelime);
    }

    return 0;
}
