/* Q2--> Write a program having a variable ‘i’. Print the address of ‘i’.
 Pass this variable to a function and print its address. Are these addresses same? Why?
*/
#include <stdio.h>
int returning(int *);
int returning(int *j)
{
    printf("The value of ptr is %u\n", j);
    printf("The value at ptr is %d\n", *j);
}
int main()
{
    int i;
    int *j = &i;

    printf("Enter value of i:");
    scanf("%d", &i);
    printf("The address of i is %u\n", &i);
    returning(j);
    return 0;
}