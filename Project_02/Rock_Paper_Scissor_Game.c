/*Rock, Paper, Scissors is a game most of us have played during school time.
(I sometimes play it even now).
Write a C program capable of playing this game with you.
Your program should be able to print the result after you choose Rock, Paper or Scissor.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int player, computer = rand() % 3;

    char name[20];

    printf("\n ---WELCOME TO THE ROCK-PAPER-SCISSOR SIMULATOR--- \n ----Here you can Refresh You Mind or maybe not:)--- \n");
    printf("First, can we know your name please?\n");

    scanf("%s", name);
    printf("\nOkay %s, Now, Choose from the below Options!\nChoose 0 for Rock\nChoose 1 for Scissor\nChoose 2 for Paper\n", name);
    scanf("%d", &player);

    printf("%s chose %d\n", name, player);

    printf("Computer chose %d\n", computer);
    if (player == 0 && computer == 0)
    {
        printf("It's a Draw between %s and the Computer!\n", name);
    }

    else if (player == 1 && computer == 1)
    {
        printf("It's a Draw between %s and the Computer!\n", name);
    }

    else if (player == 2 && computer == 2)
    {
        printf("It's a Draw between %s and the Computer!\n", name);
    }

    else if (player == 0 && computer == 1)
    {
        printf("Congratulations! %s Wins!\n", name);
    }

    else if (player == 1 && computer == 0)
    {
        printf("Oh! Better Luck for Next Time, %s!\n", name);
    }

    else if (player == 0 && computer == 2)
    {
        printf("Oh! Better Luck for Next Time, %s!\n", name);
    }

    else if (player == 2 && computer == 0)
    {
        printf("Congratulations! %s Wins!\n", name);
    }

    else if (player == 2 && computer == 1)
    {
        printf("Oh! Better Luck for Next Time, %s!\n", name);
    }

    else if (player == 1 && computer == 2)
    {
        printf("Congratulations! %s Wins!\n", name);
    }

    else
    {
        printf("Something went Wrong\n");
    }
    return 0;
}