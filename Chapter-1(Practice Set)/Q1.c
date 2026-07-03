/*Write a C program to calculate area of a rectangle:
a.
Using hard coded inputs.
b.
Using inputs supplied by the user.
*/
#include <stdio.h>
int main()
{
    int l, b;
    printf("Enter Length:");
    scanf("%d", &l);
    printf("Enter Breadth:");
    scanf("%d", &b);

    printf("The Area Of this Rectangle is %d", l * b);
    return 0;
}