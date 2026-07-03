/*Write a program to find greatest of four numbers entered by the user.
*/
#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter a:");
    scanf("%d", &a);
    printf("Enter b:");
    scanf("%d", &b);
    printf("Enter c:");
    scanf("%d", &c);
    printf("Enter d:");
    scanf("%d", &d);
    if (a > b && a > c && a > d)
    {
        printf("a is gratest!");
    }
    else if (b > a && b > c && b > d)
    {
        printf("b is the greatest!");
    }
    else if (c > a && c > b && c > d)
    {
        printf("c is the greatest!");
    }
    else
    {
        printf("d is the greatest of all!");
    }
    return 0;
}