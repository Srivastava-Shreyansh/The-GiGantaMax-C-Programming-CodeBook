#include <stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n%2==0){
        printf("The entered number is not a prime_number!");
    }
    else if(n==0||n==1){
        printf("The entered number is not a prime_number!");
    }
    else{
        printf("The entered number is a prime-number!");
    }
    return 0;
}