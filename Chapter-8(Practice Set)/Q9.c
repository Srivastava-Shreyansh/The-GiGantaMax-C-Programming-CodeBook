#include <stdio.h>
#include <string.h>
int main()
{
    char c;
    int contain = 0;
    char str[] = "Krishna";
    printf("Enter a character to check whether it is present in the string:");
    scanf("%c", &c);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c)
        {
            contain = 1;
            break;
        }
    }
    if (contain)
    {
        printf("Yes! This String contains %c in the string!", c);
    }
    else
    {
        printf("No! This String does not contains %c in the string!", c);
    }

    return 0;
}