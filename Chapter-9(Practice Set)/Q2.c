/*Write a function ‘sumVector’ which returns the sum of two vectors passed to it.
The vectors must be two–dimensional.
*/
#include <stdio.h>
struct Vector
{
    int i, j;
};

struct Vector sumVector(struct Vector v1, struct Vector v2)
{
    struct Vector v3 = {(v1.i + v2.i), (v1.j + v2.j)};
    return v3;
}
int main()
{
    struct Vector v1 = {1, 2};
    struct Vector v2 = {4, 5};
    struct Vector v3 = sumVector(v1, v2);
    printf("The value of the sumVector is %di + %dj", v3.i, v3.j);
    return 0;
}