/*Write a program to create an array of 10 integers and store multiplication table of any number in it.
Also, take input from user.
*/
#include <stdio.h>

int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int arr[10];
    for(int i=0;i<10;i++){
        arr[i]=n*(i+1);
    }
    for(int i=0;i<10;i++){
        printf("%d x %d = %d\n",n,i+1,arr[i]);
    }
    return 0;
}