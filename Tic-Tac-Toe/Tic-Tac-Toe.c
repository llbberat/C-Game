#include <stdbool.h>
#include <stdio.h>
int flag= 0;
void control(char tictac[3][3]) {
    for (int i = 0; i < 3; i++) {
        if (tictac[i][0]==tictac[i][1]&&tictac[i][1]==tictac[i][2]&&tictac[i][0]!=' ') {
            flag=1;
        }}for (int i=0;i<3;i++) {
        if (tictac[0][i]==tictac[1][i]&&tictac[1][i]==tictac[2][i]&&tictac[0][i]!=' ') {
            flag=1;}}

    if (tictac[0][0]==tictac[1][1]&&tictac[1][1]==tictac[2][2]&&tictac[0][0]!=' ') {
        flag=1;
    }
    if (tictac[2][0]==tictac[1][1]&&tictac[1][1]==tictac[0][2]&&tictac[2][0]!=' ') {
        flag=1;
    }
}
int main() {
    char tictac[3][3],player1[20],player2[20];
    int tic,toe,s,c,h=1;

    printf("\n1. Player Name:");
    scanf("%s",player1);


    printf("\n 2.Player Name:");
    scanf("%s",player2);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            tictac[i][j] = ' ';

            printf("|%3.c %s", tictac[i][j],(j==2 ? "|":""));

        }
        puts("\n---------------\n");
    }

    while (h<10) {

        while (true) {
            printf("enter to number %s:",player1);
            scanf("%d",&tic);



            if (tic<=3) {s=0,c=tic-1;}
            else if (tic<=6) {s=1,c=tic-4;}
            else if (tic<=9) {s=2,c=tic-7;}else {
                printf("try again\n");
                continue;}

            if (tictac[s][c]!=' ') {
                printf("try again\n");continue;
            }else {
                tictac[s][c]='X';
                h++;
                break;
            }
        }

        control(tictac);







        for (int i=0;i<3;i++) {
            for (int j=0;j<3;j++) {
                printf("|%3.c %s", tictac[i][j],(j==2 ? "|":""));

            }
            printf("\n----------------\n");
        }
        if (flag==1) {
            printf("%s Winner winner chicken winner.",player1);
            return 0;
        }

        if (flag==0&&h==10) {
            printf("\n\nTIE.");
            return 0;
        }

        while (true) {
            printf("enter to number %s:",player2);
            scanf("%d",&toe);
            if (toe<=3) {s=0,c=toe-1;}
            else if (toe<=6) {s=1,c=toe-4;}
            else if (toe<=9) {s=2,c=toe-7;}else {
                printf("try again\n");
                continue;}

            if (tictac[s][c]!=' ') {
                printf("try again\n");continue;
            }else {
                tictac[s][c]='O';
                h++;
                break;
            }
        }

        for (int i=0;i<3;i++) {
            for (int j=0;j<3;j++) {
                printf("|%3.c %s", tictac[i][j],(j==2 ? "|":""));

            }
            printf("\n----------------\n");
        }
        control(tictac);
        if (flag==1) {
            printf("%s Winner winner chicken winner.",player2);
            return 0;
        }


    }
    return 0;






}
