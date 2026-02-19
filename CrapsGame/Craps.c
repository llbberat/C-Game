#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int pellicle1, pellicle2, totalpellicle, control = 0, Scor = 0;
    srand(time(NULL));

    while (1) {
        pellicle1 = rand() % 6 + 1;
        pellicle2 = rand() % 6 + 1;
        totalpellicle = pellicle1 + pellicle2;

        printf("Pellicle 1: %d, Pellicle 2: %d -> Total Pellicle: %d\n", pellicle1, pellicle2, totalpellicle);

        if (control == 0) {
            if (totalpellicle == 7 || totalpellicle == 11) {
                printf("You Win! \n");
                return 0;
            }
            else if (totalpellicle == 2 || totalpellicle == 3 || totalpellicle == 12) {
                printf("You Lost BYe Bye\n");
                return 0;
            }
            else {
                Scor = totalpellicle;
                control = 1;
                printf("Target Score: %d. Now you need to score again!\n\n", Scor);
                continue;
            }
        }
        if (control==1) {
            if (totalpellicle == Scor) {
                printf("Reach the target score! You won!!\n");
                break;
            }
            else if (totalpellicle == 7) {
                printf("You scored 7 goals, but you lost!!\n");
                break;
            }

        }
    }

    return 0;
}
