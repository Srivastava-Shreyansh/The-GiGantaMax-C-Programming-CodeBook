#include <stdio.h>

// Structure to store date
struct Date
{
    int day;
    int month;
    int year;
};

// Function to compare two dates
// Returns:
//  0 → if both dates are equal
//  1 → if first date is later (greater)
// -1 → if first date is earlier (smaller)
int compareDates(struct Date d1, struct Date d2)
{
    if (d1.year > d2.year)
        return 1;
    else if (d1.year < d2.year)
        return -1;
    else
    { // same year
        if (d1.month > d2.month)
            return 1;
        else if (d1.month < d2.month)
            return -1;
        else
        { // same month
            if (d1.day > d2.day)
                return 1;
            else if (d1.day < d2.day)
                return -1;
            else
                return 0;
        }
    }
}

int main()
{
    struct Date d1, d2;

    printf("Enter first date (DD MM YYYY): ");
    scanf("%d %d %d", &d1.day, &d1.month, &d1.year);

    printf("Enter second date (DD MM YYYY): ");
    scanf("%d %d %d", &d2.day, &d2.month, &d2.year);

    int result = compareDates(d1, d2);

    if (result == 0)
        printf("Both dates are equal.\n");
    else if (result == 1)
        printf("The first date is later than the second date.\n");
    else
        printf("The first date is earlier than the second date.\n");

    return 0;
}