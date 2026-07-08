#include <stdio.h>
struct employee
{
    int code; // This declares a new user defined data type!
    char name[10];
    float salary;
}; // semicolon is important
int main(){
    struct employee facebook[100]; // an array of structures 
    // we can access the data using: 
    facebook[0].code = 100; 
    facebook[1].code = 101; // And so on

    struct employee sensei = {100,"Sensei_SS", 71.22};

    printf("%d, %.2f and %s\n",sensei.code, sensei.salary, sensei.name);

    printf("%d and %d", facebook[0].code, facebook[1].code);
    return 0;
}