/* Q3--> Write a program to change the value of a variable to ten times of its current value.
*/
#include <stdio.h>
void change_to_ten_times(int *);
void change_to_ten_times(int *a)
{
    *a = (*a * 10);
}
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d", &x);
    printf("Previously,The value of x is %d\n", x);
    change_to_ten_times(&x);
    printf("And Now,The value of x is %d\n", x);
    return 0;
}