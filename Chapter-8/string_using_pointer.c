#include <stdio.h>

int main(){
    char *ptr="Krrish";
    ptr="Krishna"; //strings declared using pointer can be reinitialized.
    puts(ptr);
    return 0;
}