#include <stdio.h>
#include <math.h>

int main() {
    float side;
    printf("Enter the side length of the square: ");
    scanf("%f", &side);

    float area = pow(side, 2);  
    printf("Area of the square: %.2f\n", area);
    return 0;
}
