#include "cs50lib/cs50.h"
#include <stdio.h>

int main(void)
{
    // Prompting the user for a starting number of llamas
    int start;
    do
    {
        int start = get_int("Starting number of llamas: ");
    }
    while (start < 9);

    // Prompting the user for a ending number of llamas
    int end;
    do
    {
        int end = get_int("Ending number of llamas: ");
    }
    while (end < start);

    // How many years will it take to reach the ending number of llamas?
    int years = 0;
    start += start/12;
    while (start < end)
    {
        start += start/12;
        years++;
    }
    printf("Years: %i\n", years);
}