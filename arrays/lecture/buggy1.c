#include <cs50.h>
#include <stdio.h>

int get_negative_int(void);

int main(void)
{
    int n = get_negative_int();
    printf("%i\n", n);
}

int get_negative_int(void)
{
    int n; // I need to declare 'n' here to it be in the function scope
    do
    {
        n = get_int("Negative integer: ");
    } while (n >= 0);
    return n;
}