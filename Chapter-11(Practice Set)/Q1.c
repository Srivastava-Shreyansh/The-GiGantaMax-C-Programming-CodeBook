/*Write a program to dynamically create an array of size 6 capable of storing 6 integers.
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n=6;
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));
   
    ptr[0] = 6.34521;
    ptr[1] = 9.65478;
    ptr[2] = 8.43126;
    ptr[3] = 879.2346;
    ptr[4] = 87.4568;
    ptr[5] = 81.4568;
    
    printf("%d\n", ptr[0]);
    printf("%d\n", ptr[1]);
    printf("%d\n", ptr[2]);
    printf("%d\n", ptr[3]);
    printf("%d\n", ptr[4]);
    printf("%d\n", ptr[5]);
    return 0;
}