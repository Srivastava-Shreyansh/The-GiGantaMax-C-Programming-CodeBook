#include <stdio.h>
struct employee
{
    int code; // This declares a new user defined data type!
    char name[10];
    float salary;
}; // semicolon is important
int main(){
    struct employee e1;
    e1.code = 72;
    struct employee *ptr; 
    ptr = &e1; // now we can print structure elements using: 
    printf("%d\n", (*ptr).code);
    printf("%d", ptr->code); //Arrow_Operator
    return 0;
}