/* PROJECT 1: NUMBER GUESSING GAME
We will write a program that generates a random number and asks the player to guess it.
If the player’s guess is higher than the actual number, the program displays “Lower number please”.
Similarly, if the user’s guess is too low, the program prints “Higher number please”.
When the user guesses the correct number, the program displays the number of guesses the player used to arrive at the number.
Hint: Use loop & use a random number generator.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int random_number = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed_number;
    char name[40];
    printf("\n--- Welcome to GUESS THE NUMBER SIMULATOR! ---\nFirstly, can we know your name please?\n");
    scanf("%s", name);
    printf("Okay %s, now Guess any whole number(try between 0 to 100):", name);
    do
    {
        scanf("%d", &guessed_number);
        if (guessed_number > random_number)
        {
            printf("Please Enter A Lower Number!\n");
        }
        else if (guessed_number < random_number)
        {
            printf("Please Enter A Higher Number!\n");
        }
        else
        {
            printf("Congratulations! You Got The Number Mate!\n--- %d is that Number! ---\n", guessed_number);
        }
        no_of_guesses++;
    } while (guessed_number != random_number);
    if (no_of_guesses <= 3)
    {
        printf("\n--- Pro Bande Lagte Ho Guruuuu! You guessed this number in just %d guesses ---\n", no_of_guesses);
    }
    else if (no_of_guesses > 3 && no_of_guesses <= 8)
    {
        printf("\n--- Nice! You guessed this number in %d guesses ---\n", no_of_guesses);
    }
    else
    {
        printf("\n--- Noobde Ho Dost Abhi! You guessed the number in %d guesses ---\n", no_of_guesses);
    }
    return 0;
}