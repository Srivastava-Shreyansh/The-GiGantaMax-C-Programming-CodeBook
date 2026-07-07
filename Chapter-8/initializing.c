#include <stdio.h>

int main(){
    char st[50];
    printf("Enter a String:");
    scanf("%s",st); //scanf cannot be used to input multi-word strings with spaces.
    printf("The String is %s",st);
    return 0;
}