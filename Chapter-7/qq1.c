/*Quick Quiz: Write a program to accept marks of five students in an array 
and print them on the screen.
*/
#include <stdio.h>

int main()
{
    int marks[5];
    printf("Enter Marks of the Students: \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The Marks at index %d is %d\n", i, marks[i]);
    }
    return 0;
}