#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("sensei.txt", "a");
    int num = 432;
    fprintf(fptr, "%d", num);
    fclose(fptr);
    return 0;
}