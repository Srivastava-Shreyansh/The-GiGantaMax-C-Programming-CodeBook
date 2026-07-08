#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int code; // This declares a new user defined data type!
    char name[10];
    float salary;
}Emp; // semicolon is important
int main()
{
    // typedef struct employee Emp;
    // Emp e1;
    Emp e1;
    Emp *ptr = &e1;
    e1.code = 6801;
    strcpy(e1.name, "Sensei_SS");
    e1.salary = 59.42;

    printf("Code-->%d, Salary-->%.2f and Name-->%s\n", e1.code, e1.salary, e1.name);
    printf("Code-->%d, Salary-->%.2f and Name-->%s", ptr->code, ptr->salary, ptr->name);
    return 0;
}