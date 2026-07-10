//Write a program to create an array of size n using calloc 
//where n is an integer entered by the user.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    int *ptr;
    printf("Enter number of elements:");
    scanf("%d",&n);
    ptr = (int *)calloc(n, sizeof(int));
    ptr[0] = 6801;
    ptr[1] = 8790;
    printf("%d\n%d", ptr[0], ptr[1]);
    return 0;
}