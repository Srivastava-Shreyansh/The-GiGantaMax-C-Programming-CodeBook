/*Write a program to print multiplication table of a given number n.
*/
#include <stdio.h>

int main()
{
    int i = 1, n;
    printf("Enter a natural number:");
    scanf("%d", &n);
    printf("The Multiplication Table of %d:\n", n);
    do
    {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    } while (i <= 10);
    return 0;
}