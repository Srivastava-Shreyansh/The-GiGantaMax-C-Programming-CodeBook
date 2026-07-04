#include <stdio.h>
void good_morning();
void good_afternoon();
void good_night();

void good_morning()
{
    printf("Good Morning Mate!\n");
}
void good_afternoon()
{
    printf("Good Afternoon Mate!\n");
}
void good_night()
{
    printf("Good Night Mate, Sweet Dreams!\n");
}

int main()
{
    good_morning();
    good_afternoon();
    good_night();
    return 0;
}