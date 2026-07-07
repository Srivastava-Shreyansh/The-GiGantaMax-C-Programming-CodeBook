// Write a program to count the occurrence of a given character in a string.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[80]="Krishna";
    char c;
    int count = 0;
    printf("Enter the character to count the occurence of this character:");
    scanf("%c", &c);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c)
        {
            count++;
        }
    }
    printf("The character %c is occuring %d times.\n", c, count);
    return 0;
}