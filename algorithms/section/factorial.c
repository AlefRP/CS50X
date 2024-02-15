#include <stdio.h>

// Declaration
int factorial(int n);

int main(void)
{
    int n = 5;
    printf("%i\n", factorial(n));
}

int factorial(int n)
{
    // base case
    if (n == 1)
    {
        return 1;
    }
    // recursive case
    else
    {
        return n * (n - 1);
    }
}