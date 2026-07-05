#include <stdio.h>
int sum(int *, int *);
int sum(int *a, int *b)
{
    *a = 12;
    *b = 12;
    return *a + *b;
}
int main()
{
    int x = 1, y = 6;
    printf("The sum is %d\n", sum(&x, &y));
    printf("The value of x is %d\n", x);
    return 0;
}