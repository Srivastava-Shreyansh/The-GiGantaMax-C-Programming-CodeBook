#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("sensei.txt", "r");
    char c = fgetc(fptr);
    printf("%c", c);
    fclose(fptr);
    return 0;
}