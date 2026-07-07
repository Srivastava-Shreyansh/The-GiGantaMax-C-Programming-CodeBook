//Quick Quiz: Create a string using double quotes and print its content using a loop.
#include <stdio.h>

int main(){
    char st[]="abc";
    for(int i=0;i<3;i++){
        printf("%c",st[i]);
    }
    return 0;
}