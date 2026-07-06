#include <stdio.h>

int main()
{
    int marks[90]; //The index of an array of size (n) goes from "0 to (n-1)"!

    marks[0] = 50;
    marks[1] = 30;

    printf("Marks 0 and Marks 1 are %d and %d", marks[0], marks[1]);
    return 0;
}