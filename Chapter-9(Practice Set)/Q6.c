/*Create an array of 5 complex numbers created in Problem 5 and
display them with the help of a display function.
The values must be taken as an input from the user.
*/
#include <stdio.h>
typedef struct complexNo
{
    int a, b;
} Complex;
void display(Complex c)
{
    printf("The complex number is %d + %di\n", c.a, c.b);
}
int main()
{
    Complex carr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter real part:");
        scanf("%d", &carr[i].a);
        printf("Enter imaginary part:");
        scanf("%d", &carr[i].b);
        display(carr[i]);
    }
    return 0;
}