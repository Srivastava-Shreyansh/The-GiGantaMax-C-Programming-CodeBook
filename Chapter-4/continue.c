#include <stdio.h>
int main()
{
    int skip,n;
    printf("Enter how many natural numbers you have to print:");
    scanf("%d", &n);
    printf("Enter the natural number you have to skip:");
    scanf("%d", &skip);
    int i = 1;
    while (i < n)
    {
        if (i == skip)
        {
            i++;
            continue;
        }
            printf("%d\n", i);
            i++;
    }        
    return 0;
}