/* Q5-->Write a program using a function which calculates the sum and average of two numbers.
 Use pointers and print the values of sum and average in main().
*/
#include <stdio.h>
int sum(int, int);
int sum(int a, int b)
{
    int s = a + b;
    int *ptr1 = &s;
    printf("The sum is %d\n", s);
}

int avg(int, int);
int avg(int c, int d)
{
    float avg = ((c + d) / 2.0);
    float *ptr2 = &avg;
    printf("The average is %.2f\n", avg);
}

int main()
{
    int x, y;
    int *ptr1;
    float *ptr2;

    printf("Enter num1:");
    scanf("%d", &x);
    printf("Enter num2:");
    scanf("%d", &y);

    sum(x,y);
    avg(x,y);
    return 0;
}