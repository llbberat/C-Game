#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
    int userGuess, secretNumber;
    int maxAttempts = 5;
    char difficulty[100];
    srand(time(NULL));

    printf("---- Number Guessing Game ----\n\n");
    printf("Choose Difficulty (Easy - Medium - Hard): ");
    scanf("%99s", difficulty); // Taşmayı önlemek için %99s

    // Zorluk ayarı
    if (strcasecmp(difficulty, "easy") == 0) { // strcasecmp büyük/küçük harf duyarsızdır
        secretNumber = rand() % 10;
    } else if (strcasecmp(difficulty, "medium") == 0) {
        secretNumber = rand() % 25;
    } else {
        secretNumber = rand() % 50;
    }

    printf("You have %d attempts.\n", maxAttempts);

    for (int i = 1; i <= maxAttempts; i++) {
        printf("\nAttempt %d - Enter your guess: ", i);
        scanf("%d", &userGuess);

        if (userGuess == secretNumber) {
            printf("Congratulations! You guessed it in %d attempts.\n", i);
            return 0;
        } else if (userGuess > secretNumber) {
            printf("Try a smaller number.");
        } else {
            printf("Try a larger number.");
        }
    }

    printf("\nGame Over! The number was: %d\n", secretNumber);
    return 0;
}
