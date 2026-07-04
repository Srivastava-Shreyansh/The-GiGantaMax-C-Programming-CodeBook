/* Q2--> Write a function to convert Celsius temperature into Fahrenheit.
*/
#include <stdio.h>
float c_to_f(float);
float c_to_f(float c)
{
    return ((9.0 / 5.0) * c + 32);
}
int main()
{
    float c;
    printf("Enter Temperature(in Celsius):");
    scanf("%f", &c);
    printf("The temperature in Fahrenheit is:%.2f", c_to_f(c));
    return 0;
}