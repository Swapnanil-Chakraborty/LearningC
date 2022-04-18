#include <stdio.h>
#include <string.h>
int factorial(int n);
int main()
{
    int n = 5;
    printf("The Factorial of %d is = %d", n, factorial(n));
    return 0;
}
int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int factor = factorial(n - 1) * n;
    return factor;
}  