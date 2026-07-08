#include <stdio.h>
#include <string.h>

struct employee
{
    int code; // This declares a new user defined data type!
    char name[10];
    float salary;
}; // semicolon is important

void show(struct employee e1); // function prototype

void show(struct employee e1)
{

    printf("Code-->%d, Salary-->%.2f and Name-->%s", e1.code, e1.salary, e1.name);
}
int main()
{
    struct employee e1;
    e1.code = 6801;
    strcpy(e1.name, "Sensei_SS");
    e1.salary = 6000000;
    show(e1);

    return 0;
}