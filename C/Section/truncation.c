#include "cs50lib/cs50.h"
#include <stdio.h>

int main(void)
{
    int a = 2;
    int b = 3;
    int c = (float) a / b; // Make just one value in the formula as float, the result will be a float
    printf("%f\n", c);
}