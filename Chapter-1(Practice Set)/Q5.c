//Write a program to find the area of a square.
#include <stdio.h>
#include<math.h>
int main(){
    float a;
    printf("Enter the side length of the square:");
    scanf("%f", &a);
    
    printf("The area of the square is %.2f", pow(a,2));
    return 0;
}