#include <stdio.h>

int main(){
    char st[30];
    printf("Enter a string: ");
    fgets(st, sizeof(st), stdin); //can be used to receive a multo-word strings.
    printf("%s", st); //gives the output in the same line.
    puts(st); //puts() can be used to output a string, also, shifts the cursor to a new line after the output is given
    printf(" ---Program Terminated!--- ");
    return 0;
}