/* Q4--> Write a function and pass the value by reference.
*/
#include <stdio.h>
void function(int *);
void function(int *a)
{
    *a = (*a + 10);
}
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d", &x);
    printf("Previously, value of x is %d\n", x);
    function(&x);
    printf("And Now, value of x is %d\n", x);
    return 0;
}