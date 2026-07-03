#include <stdio.h>

int main(){
    int a,b;
    printf("Enter value of a:\n");
    scanf("%d",&a);
    printf("Enter value of b:\n");
    scanf("%d",&b);
    a>b?printf("a is greater!"):printf("b is greater");
    return 0;
}