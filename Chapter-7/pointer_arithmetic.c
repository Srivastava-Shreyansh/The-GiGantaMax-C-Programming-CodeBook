#include <stdio.h>

int main()
{
    int a;
    int *b = &a;
    printf("Enter any Number:");
    scanf("%d", &a);
    printf("The address of a is %u\n", b);
    b++;
    printf("Now, address is incremented by the storage its' memory stored! The address of b is %u\n", b);
    return 0;
}