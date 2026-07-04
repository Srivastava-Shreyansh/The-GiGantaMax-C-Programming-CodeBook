/* Q1--> Write a program using function to find average of three numbers.
*/
#include <stdio.h>
int avg(int, int, int);
int avg(int a, int b, int c)
{
    return (a + b + c) / 3;
}
int main()
{
    int a, b, c;
    printf("Enter value of a:");
    scanf("%d", &a);
    printf("Enter value of b:");
    scanf("%d", &b);
    printf("Enter value of c:");
    scanf("%d", &c);
    printf("The average of %d,%d,%d is:%d\n", a, b, c, avg(a, b, c));
    return 0;
}