#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 18;
    float c = (float) a / b; // Make just one value in the formula as float, the result will be a float
    int d = c;
    printf("%f\n", c);
}