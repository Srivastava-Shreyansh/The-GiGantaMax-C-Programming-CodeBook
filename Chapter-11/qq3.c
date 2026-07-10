//Write a program to demonstrate the usage of free() with malloc().
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    int *ptr;
    printf("Enter number of elements:");
    scanf("%d",&n);
    ptr = (int *)malloc(n * sizeof(int));
    ptr[0] = 6801;
    ptr[1] = 8790;
    free(ptr);
    printf("%d\n%d", ptr[0], ptr[1]);
    return 0;
}