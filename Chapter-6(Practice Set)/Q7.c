/* Q7-->Try problem 3 using call by value and 
verify that it does not change the value of the said variable. */
#include <stdio.h>

void makeTenTimes(int n) {
    n = n * 10;
    printf("Inside function, value = %d\n", n);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    makeTenTimes(num);  // Call by value

    printf("After function call, value in main = %d\n", num);

    return 0;
}
