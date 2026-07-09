//Take name and salary of two employees as input from the user and 
// write them to a text file in the following format:
// i.Name1, 3300
// ii.Name2, 7700
#include <stdio.h>

int main(){
    FILE *ptr;
    char name1[35], name2[35];
    int salary1, salary2;
    ptr=fopen("salary.txt", "w");

    printf("Enter name1:");
    scanf("%s",name1);

    printf("Enter Salary1:");
    scanf("%d", &salary1);
    
    printf("Enter name2:");
    scanf("%s",name2);
    
    printf("Enter salary2:");
    scanf("%d", &salary2);

    fprintf(ptr, "%s, %d\n", name1, salary1);
    fprintf(ptr, "%s, %d\n", name2, salary2);
    return 0;
}