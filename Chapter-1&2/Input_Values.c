#include <stdio.h>
int main()
{
    int a;
    float f;
    char c;

    printf("Enter Roll Number:");
    scanf("%d", &a);

    printf("Enter CGPA:");
    scanf("%f", &f);

    printf("Enter Section:");
    scanf(" %c", &c);

    printf("YOUR ROLL NUMBER IS %d, CGPA IS %.2f AND SECTION IS %c", a, f, c);

    return 0;
}