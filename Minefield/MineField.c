#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

void pen(char map[5][5]) {




    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("|%c %s", map[i][j],(j==4 ? "|":" "));
        }
        printf("\n------------------------------\n");


    }



}

int main() {
    srand(time(NULL));


    char map[5][5],minemap[5][5];
    int N,sat,süt,satmine,sütmine,h=0;



    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            map[i][j] = ' ';
            minemap[i][j] = ' ';
            printf("|%2.c %s", map[i][j],(j==4 ? "|":" "));
        }
        printf("\n-------------------------\n");
    }

    int L=0;

    while (true) {

        char level[10];
        printf("easy-medium-hard ?:");
        scanf("%s",level);

        if (strcmp(level,"easy")==0) {
            printf("Easy difficulty level selected, number of mines: 5\n");L=5;
            break;
        }else if (strcmp(level,"medium")==0) {
            printf("Medium level selected, number of mines: 7\n");L=7;break;
        }
        else if (strcmp(level,"hard")==0) {
            printf("Hard level selected, number of mines: 10\n");L=10;break;
        }else {
            printf("Try again,please.");
        }

    }

    int i=0;
    while (i<L) {

        satmine=rand()%5;
        sütmine=rand()%5;

        if (minemap[satmine][sütmine]==' ') {
            minemap[satmine][sütmine]='X';
            i++;
        }
    }

    while (h<25-L) {
        printf("Enter to Number:");
        scanf("%d",&N);

        if (N<5) {
            sat=0,süt=N;}else if (N<10){sat=1,süt=N-5;}else if (N<15) {sat=2,süt=N-10;}else if (N<20){
                sat=3,süt=N-15;}else if (N<25){sat=4,süt=N-20;}

        if (map[sat][süt]=='T') {
                    printf("\nis a full\n");
                }
        else if (minemap[sat][süt]==' ') {

            map[sat][süt]='T';
            h++;

            pen(map);

        }
        else {
            pen(minemap);
            printf("You lost\n");
            return 0;
        }





    }

    printf("\n-------------------------\n");
    printf("\n YOU WİN!!");




}




