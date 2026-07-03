/*Calculate income tax paid by an employee to the government as per the slabs mentioned below:
Income Slab Tax
2.5 – 5.0L     5%
5.0L - 10.0L   20%
Above 10.0L    30%
Note that there is no tax below 2.5L. Take income amount as an input from the user.
*/
#include <stdio.h>

int main(){
    int salary;
    float tax;
    printf("Enter your Salary:");
    scanf("%d", &salary);
    if (salary<=250000){
        tax=0;
        printf("No tax needed!");
    }
    else if(salary>=250000&&salary<500000){
        tax=(salary-250000)*0.05;
        printf("Your tax will be %f", tax);
    }
    else if(salary>=500000&&salary<1000000){
        tax=(salary-500000)*0.20+(salary-250000)*0.05;
        printf("Your tax will be %f", tax);
    }
    else if(salary>=1000000){
        tax=(salary-1000000)*0.30+(salary-500000)*0.20+(salary-250000)*0.05;
        printf("Your tax will be %f", tax);
    }
    return 0;
}