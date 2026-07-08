// Create a two-dimensional vector using structures in C.
#include <stdio.h>
struct Vector
{
    int i, j;
};
int main()
{
    struct Vector v = {1, 2};
    printf("The value of 2D Vector is %di + %dj.", v.i, v.j);
    return 0;
}