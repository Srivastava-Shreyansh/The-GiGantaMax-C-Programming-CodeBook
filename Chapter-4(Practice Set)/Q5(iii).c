/*Write a program to implement program 5 using ‘for’ and ‘do-while’ loop.
*/
#include <stdio.h>

int main()
{
    int i, sum = 0;
    for (i = 1; i <= 10; i++)
    {
        sum += i;
    }
    printf("The sum of first 10 natural numbers is %d", sum);
    return 0;
}