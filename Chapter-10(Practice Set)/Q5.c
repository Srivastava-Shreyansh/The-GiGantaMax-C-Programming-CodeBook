// Write a program to modify a file containing an integer to double its value.
#include <stdio.h>

int main()
{
    FILE *ptr;
    int n;
    ptr = fopen("double.txt", "r");
    fscanf(ptr, "%d", &n);
    fclose(ptr);

    ptr = fopen("double.txt", "w");
    fprintf(ptr, "%d", n * 2);
    fclose(ptr);
    return 0;
}