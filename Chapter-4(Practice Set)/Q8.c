/*Write a program to calculate the factorial of a given number using a for loop.
Repeat 8 using while loop.
*/
#include <stdio.h>

int main()
{
    int n, product = 1;
    printf("Enter a natural number:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        product = product * i;
    }
    printf("The factorial of %d is %d", n, product);
    return 0;
}