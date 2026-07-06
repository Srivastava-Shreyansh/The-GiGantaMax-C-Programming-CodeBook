#include <stdio.h>

int main()
{
    int marks[] = {98, 78, 90, 67, 45};
    int *ptr = marks;
    for (int i = 0; i < 5; i++)
    {
        printf("The marks at index %d is %d\n", i, *ptr);
        ptr++;
    }
    return 0;
}