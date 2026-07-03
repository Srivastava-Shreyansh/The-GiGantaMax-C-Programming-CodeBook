/*Write a program to determine whether a student has passed or failed.
To pass, a student requires a total of 40% and at least 33% in each subject. 
Assume there are three subjects and take the marks as input from the user.
*/
#include <stdio.h>

int main()
{
    int marks1, marks2, marks3;
    printf("Enter Marks1:");
    scanf("%d", &marks1);
    printf("Enter Marks2:");
    scanf("%d", &marks2);
    printf("Enter Marks3:");
    scanf("%d", &marks3);

    if (marks1 < 33 || marks2 < 33 || marks3 < 33)
    {
        printf("You have failed your examination!(Kisi ek yaa do me nipat gaye...)");
    }
    else if (((marks1 + marks2 + marks3) / 3) < 40)
    {
        printf("You have failed your examination!(Total mila ke bhi na laa paaye...)");
    }
    else if ((marks1 + marks2 + marks3 )> 250 && ((marks1 + marks2 + marks3) < 300))
    {
        printf("Congratulations! You are a tomperrr!");
    }
    else
    {
        printf("You have passed the examination!");
    }

    return 0;
}