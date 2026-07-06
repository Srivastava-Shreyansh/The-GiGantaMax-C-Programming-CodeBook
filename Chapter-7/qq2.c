#include <stdio.h>

int main()
{
    int marks[3][2];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter Marks:");
            scanf("%d", &marks[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d", marks[i][j]);
        }
        printf("\n");
    }
    return 0;
}