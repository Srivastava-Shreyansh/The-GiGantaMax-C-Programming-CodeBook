/*Write a program to convert Celsius (Centigrade degrees temperature to Fahrenheit).
*/
#include <stdio.h>

int main()
{
    float c;
    printf("Enter Temperature(in Celsius):");
    scanf("%f", &c);
    printf("The Required Temperature in Fahrenheit is %.2f", ((1.8 * c) + 32));
    return 0;
}