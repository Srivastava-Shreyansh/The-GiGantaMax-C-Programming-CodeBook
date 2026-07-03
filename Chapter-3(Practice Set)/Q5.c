/*Write a program to determine whether a character entered by the user is lowercase or not.
*/
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a letter:");
    scanf("%c", &ch);
    printf("The value of character is %d\n", ch);

    if (ch >= 97 && ch <= 122)
    {
        printf("Lowercase.\n");
    }
    else
    {
        printf("Not Lowercase.\n");
    }
    return 0;
}