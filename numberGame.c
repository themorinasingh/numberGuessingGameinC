#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int guess, random;
    int numberofguesses = 0;
    //seeding rand function to current time
    srand(time(NULL));

    printf("Welcome to the world of Guessing Numbers");
    random = rand() % 100 + 1; //Generatig a random number Between 1 to 100
    // printf("%d", random);
    do {
        printf("\nPlease Enter Your Guess between(1 to 100): ");
        scanf("%d", &guess);
        numberofguesses++;
        if (guess < random) {
            printf("Guess larger Number\n");
        }
        else if (guess > random) {
            printf("Guess a smaller Number\n");
        }
        else {
            printf("Your have successfully guessed the number in %d attempts\n", numberofguesses);
        }
    } while (guess != random);
    printf("\nBye, Thank you for playing\n");
    printf("Developed By Morina Singh");
    return 0;
}
