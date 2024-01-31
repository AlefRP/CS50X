#include <cs50.h>
#include <stdio.h>

int add_two_ints(int a, int b);

int main(void)
{
    // ask user input
    int x = get_int("x: ");
    int y = get_int("y: ");

    int z = add_two_ints(x, y);

    printf("The sum of x and y is: %i\n", z);
}

int add_two_ints(int a, int b)
{
    return a + b;
}
