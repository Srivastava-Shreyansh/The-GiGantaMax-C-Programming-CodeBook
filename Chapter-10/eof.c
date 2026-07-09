#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("sensei.txt", "r");
    while (1)
    {
        char c = fgetc(fptr);
        printf("%c", c);
        if (c == EOF)
        {
            break;
        }
    }
    fclose(fptr);
    return 0;
}