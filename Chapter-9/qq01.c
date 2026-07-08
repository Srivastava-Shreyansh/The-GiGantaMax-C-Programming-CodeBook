#include <stdio.h>
#include <string.h>

struct employee
{
    int code; // This declares a new user defined data type!
    char name[10];
    float salary;
}; // semicolon is important
int main()
{
    struct employee e1, e2, e3;
    printf("Enter Employee_01 Code:");
    scanf("%d", &e1.code);

    printf("Enter Employee_02 Code:");
    scanf("%d", &e2.code);

    printf("Enter Employee_03 Code:");
    scanf("%d", &e3.code);

    printf("Enter Employee_01 Name:");
    scanf("%s", &e1.name);

    printf("Enter Employee_02 Name:");
    scanf("%s", &e2.name);

    printf("Enter Employee_03 Name:");
    scanf("%s", &e3.name);

    printf("Enter Employee_01 Salary:");
    scanf("%f", &e1.salary);

    printf("Enter Employee_02 Salary:");
    scanf("%f", &e2.salary);

    printf("Enter Employee_03 Salary:");
    scanf("%f", &e3.salary);

    printf("Code-->%d, Name-->%s and Salary-->%.2f\n", e1.code, e1.name, e1.salary);

    printf("Code-->%d, Name-->%s and Salary-->%.2f\n", e2.code, e2.name, e2.salary);

    printf("Code-->%d, Name-->%s and Salary-->%.2f\n", e3.code, e3.name, e3.salary);
    return 0;
}