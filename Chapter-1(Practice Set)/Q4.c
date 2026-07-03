/*Write a program to calculate simple interest 
for a set of values representing principal, number of years and rate of interest.
*/
#include <stdio.h>

int main()
{
    int p,t;
    float r;
    printf("Enter Principle Amount:");
    scanf("%d", &p);
    printf("Enter ROI:");
    scanf("%f", &r);
    printf("Enter Time Period:");
    scanf("%d", &t);

    printf("The Simple Interest for the given principal amount, roi amd time-period is %.2f", (p * r * t) / 100);
    return 0;
}