//Write a program to read three integers from a file.
#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("text_file.txt","r");
    int n;
    fscanf(ptr, "%d", &n);
    printf("One of Those three integers are-->%d\n",n);

    fscanf(ptr, "%d", &n);
    printf("One of Those three integers are-->%d\n",n);
    
    fscanf(ptr, "%d", &n);
    printf("One of Those three integers are-->%d\n",n);
    return 0;
}