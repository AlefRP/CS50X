#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // int *x = malloc(sizeof(int));
    int *x = malloc(3 * sizeof(int));

    x[0] = 72;
    x[1] = 33;
    x[2] = 12;

    printf("%i\n", x[1] + x[2]);
}