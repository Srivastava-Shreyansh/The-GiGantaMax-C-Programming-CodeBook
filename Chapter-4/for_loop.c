#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter a natural number:\n");
    scanf("%d", &n);
    printf("The natural numbers starting from 1 to %d:\n",n);
    for (i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}