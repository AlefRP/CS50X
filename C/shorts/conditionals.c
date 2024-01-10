#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("x: ");
    switch (x)
    {
    case 1:
        printf("One!\n");
        break;
    case 2:
        printf("Two!\n");
        break;
    case 3:
        printf("Three!\n");
        break;
    default:
        printf("Sorry!\n");
    }

    int expr = 1;
    if (expr)
    {
        x = 5;
    }
    else
    {
        x = 10;
    }

    // Or use the tenary operator
    int x = (expr) ? 5 : 10; 
}
