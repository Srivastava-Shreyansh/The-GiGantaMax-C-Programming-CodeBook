/*Calculate the area of a circle,
 and modify the same program to calculate the volume of a cylinder given its radius and height.
*/
#include <stdio.h>
#define PI 3.14
#include <math.h>
int main()
{
    int r, h;
    printf("Enter Radius:");
    scanf("%d", &r);
    printf("Enter Height:");
    scanf("%d", &h);

    printf("The Volume of the cylinder with the required Measurements is %.2f", PI * pow(r, 2) * h);
    return 0;
}