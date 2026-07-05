/* Q1-->Write a program to print the address of a variable. 
Use this address to get the value of the variable.
*/
#include <stdio.h>

int main()
{
    int i;
    int *j = &i;

    printf("Enter number:");
    scanf("%d", &i);

    printf("The address of i is: %u\n", &i);
    printf("The address of i is: %p\n", j);
    printf("The value of i is: %d\n", *j);
    printf("The value of i is: %d\n", *(&i));
    return 0;
}