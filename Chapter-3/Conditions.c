#include <stdio.h>
int age;
int main()
{
    printf("Enter You Age:");
    scanf("%d", &age);

    if (age >= 18 && age <= 140)
    {
        printf("You can Vote.");
    }
    else if (age < 5)
    {
        printf("You Are A Little Baby, just have some fun!");
    }
    else if (age > 140)
    {
        printf("You are about to get Die why should you vote.");
    }
    else
    {
        printf("You cannot Vote.");
    }
    return 0;
}