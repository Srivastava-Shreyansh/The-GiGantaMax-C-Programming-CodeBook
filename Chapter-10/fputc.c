#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("sensei.txt", "w");
    fputc('I',fptr);
    fclose(fptr);
    return 0;
}