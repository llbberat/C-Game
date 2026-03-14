#include <stdio.h>
#include <string.h>


int main() {
    printf("Think of a number between 1 and 100.!\n");

    int guess,min=0,max=100;
    char answer[100];


    while (1) {
        guess = (min+max)/2;
        printf("guess : %d\n(up/down/true):\n",guess);
        scanf(" %s",answer);
        if (strcmp(answer,"up")==0) {
            min=guess+1;
        }else if (strcmp(answer,"down")==0) {
            max=guess-1;
        }
        else if (strcmp(answer,"true")==0) {
            printf("I am winner !\n");
            break;
        }else{printf("Error!\n");}

        if (min>=max) {
            printf("don't cheat\n!");
            break;
        }

    }
    return 0;
}
