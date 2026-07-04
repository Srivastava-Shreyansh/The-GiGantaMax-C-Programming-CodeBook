/* Q4-->Write a program using recursion to calculate nth element of Fibonacci series.
*/
#include <stdio.h>
int fibonacci(int);
// Recursive function to find nth Fibonacci number
int fibonacci(int n)
{
    if (n == 0)
    {
        return 0; // 0th Fibonacci number
    }
    else if (n == 1)
    {
        return 1; // 1st Fibonacci number
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2); // Recursive call
    }
}

int main()
{
    int n;
    printf("Enter the position (n) of Fibonacci series: ");
    scanf("%d", &n);

    int result = fibonacci(n);
    printf("The %dth Fibonacci number is: %d\n", n, result);

    return 0;
}
