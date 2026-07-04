#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter a natural number:\n");
    scanf("%d", &n);
    for (i = 0; i < 1000; i++)
    {
        printf("%d\n", i);
        if (i == n)
        {
            break;
        }
    }
    return 0;
}