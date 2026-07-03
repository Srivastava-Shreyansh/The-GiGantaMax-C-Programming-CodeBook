/*Write a program to check whether a number is divisible by 97 or not.
*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter Number:");
    scanf("%d", &n);
    if (n % 97 == 0)
    {
        printf("%d is divisible by 97", n);
    }
    else
    {
        printf("%d is not divisble by 97", n);
    }
    return 0;
}