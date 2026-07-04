#include <stdio.h>

int fibonacci(int n);

int fibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }

    int ans = fibonacci(n-1) + fibonacci(n - 2);
    return ans;
}
int main()
{
    int f;
    f = fibonacci(6);
    printf("The fibonacci series is:%d",f);
    return 0;
}
