/*Write a program to implement program 5 using ‘for’ and ‘do-while’ loop.
*/
#include <stdio.h>

int main()
{
    int i = 1, sum = 0;
    do
    {
        sum += i;
        i++;
    } while (i <= 10);
    printf("The sum of the first ten natural numbers is %d\n", sum);
    return 0;
}