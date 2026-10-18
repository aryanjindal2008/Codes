// wap to print fibonacci series using recursion
#include <stdio.h>

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;

    printf("Enter the term number: ");
    scanf("%d", &n);

    int result = fibonacci(n);

    printf("Fibonacci term is: %d\n", result);

    return 0;
}