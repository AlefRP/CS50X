#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = 0;
    while (true)
    {
        printf("%i\n", n);
        break;
    }

    do
    {
        printf("%i\n", n);
    } while (n == 1);
    
}