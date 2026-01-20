#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int random, i = 0;
    char secim[10], harf;
    char kelime[20];

    char arraymeyve[10][12] = {"elma","kivi","armut","avakado","ananas","mandalina","portakal","kumkat","incir","alıç"};
    char arrayterim[10][12] = {"zehir","zarf","yüklem","tümleme","kimya","felsefe","antrenör","hipotalamus","miyelin","spor"};
    char arrayşair[6][20] = {"can yücel","peyami safa","nazım hikmet","turgut uyar","edip cansever","cemal sureya"};

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
        printf("Geçersiz seçim!\n");
        return 0;
    }

    while (kelime[i] != '\0') {
        i++;
    }

    char guess[i + 1];
    for (int j = 0; j < i; j++) {
        if (kelime[j] == ' ') {
            guess[j] = ' ';
        } else {
            guess[j] = '_';
        }
        printf("%c", guess[j]);
    }
    guess[i] = '\0';


    while (1) {
        printf("\nLutfen harf giriniz: ");
        scanf(" %c", &harf);

        for (int j = 0; j < i; j++) {
            if (kelime[j] == harf) {
                guess[j] = kelime[j];
            }
        }

        for (int j = 0; j < i; j++) {
            printf("%c", guess[j]);
        }
        printf("\n");

        if (strcmp(guess, kelime) == 0) {
            printf("\nTebrikler!! Kelimeyi buldunuz: %s\n", kelime);
            break;
        }
    }

    return 0;
}
