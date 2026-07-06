#include <stdio.h>

int main()
{
    float cgpa[] = {9.86, 8.51, 7.56, 8.32, 6.75};
    for (int i = 0; i < 5; i++)
    {
        printf("The cgpa for Student No. %d is %.2f\n", i, cgpa[i]);
    }
    return 0;
}