/*Write a program with a structure representing a complex number.
 */
#include <stdio.h>
typedef struct complexNo
{
    int a, b;
} Complex;
int main()
{
    Complex c1 = {1, 2};
    printf("The complex number is represented by %d + %di", c1.a, c1.b);
    return 0;
}