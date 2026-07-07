/*Write a program to take string as an input from the user using %c and %s. 
Confirm that the strings are equal.
*/
#include <stdio.h>

int main()
{
    char str[8];
    printf("Enter your characters to make it a string:\n");
    for (int i = 0; i < 7; i++)
    {
        scanf("%c", &str[i]);
        fflush(stdin);
    }
    str[7] = '\0';
    printf("%s", str);

    return 0;
}