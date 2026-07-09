/*Write a program to generate multiplication table of a given number in text format.
Make sure that the file is readable and well formatted.
*/
#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("multiply.txt", "w");
    int m = 5;
    for (int i = 1; i < 11; i++)
    {
        fprintf(ptr, "%d", m * i);
        fprintf(ptr, "%c", '\n');
    }
    fclose(ptr);
    return 0;
}