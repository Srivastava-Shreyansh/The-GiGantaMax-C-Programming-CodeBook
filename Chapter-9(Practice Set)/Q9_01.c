/*Write a structure capable of storing date. Write a function to compare those dates.
Solve problem 9 for time using ‘typedef’ keyword.
*/
#include <stdio.h>
typedef struct date_of_month_of_year
{
    int day;
    int month;
    int year;
} Date;
int main()
{
    Date d;

    printf("\n--- Enter the New Year's Day(in DD.MM.YYYY format) ---\n");

    scanf("%d %d %d", &d.day, &d.month, &d.year);

    printf("The New Year is on %d.%d.%d",d.day, d.month, d.year);
    return 0;
}