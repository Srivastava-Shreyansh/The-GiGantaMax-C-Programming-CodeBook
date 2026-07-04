/*Write a program to check whether a given number is prime or not using loops.
Implement 10 using other types of loops.
*/
#include <stdio.h>

int main()
{
    int n, not_prime = 0;
    printf("Enter a number to check whether it is prime or not:");
    scanf("%d", &n);
    if (n == 0 || n == 1)
    {
        not_prime = 1;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0 && n != 2)
            {
                not_prime = 1;
                break;
            }
        }
    }
    if (not_prime)
    {
        printf("%d is not a prime number", n);
    }
    else
    {
        printf("%d is a prime number", n);
    }
    return 0;
}