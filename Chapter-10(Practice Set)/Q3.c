/*Write a program to read a text file character by character and
write its content twice in separate file.
*/
#include <stdio.h>

int main()
{
    char ch;
    FILE *ptr1;
    FILE *ptr2;

    ptr1 = fopen("sensei.txt", "r");
    ptr2 = fopen("sensei2.txt", "a");
    while (1)
    {
        ch = fgetc(ptr1);
        if (ch == EOF)
        {
            break;
        }
        else
        {
            fprintf(ptr2, "%c", ch);
            fprintf(ptr2, "%c", ch);
            printf("%c", ch);
        }
    }
    return 0;
}