//Write a program to create a dynamic array of 5 floats using malloc().
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float n=5;
    float *ptr;
    ptr = (float *)malloc(n * sizeof(float));
   
    ptr[0] = 6.34521;
    ptr[1] = 9.65478;
    ptr[2] = 8.43126;
    ptr[3] = 879.2346;
    ptr[4] = 87.4568;
    
    printf("%.2f\n", ptr[0]);
    printf("%.2f\n", ptr[1]);
    printf("%.2f\n", ptr[2]);
    printf("%.2f\n", ptr[3]);
    printf("%.2f\n", ptr[4]);
    return 0;
}