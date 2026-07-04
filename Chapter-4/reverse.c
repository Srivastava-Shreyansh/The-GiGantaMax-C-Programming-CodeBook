#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter a natural number:\n");
    scanf("%d", &n);
    printf("The natural numbers starting from %d to 1 are:\n",n);
    for (i = n; i; i--)
    {
        printf("%d\n", i);
    }
    return 0;
}