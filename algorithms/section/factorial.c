#include <cs50.h>
#include <stdio.h>

// Declaration
int factorial(int n);

int main(void)
{
    int n;
    do
    {
        n = get_int("n: ");
    } 
    while (n <= 0);
    
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
    return n * factorial(n - 1);
}