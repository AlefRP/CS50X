#include <stdio.h>

// Variables - int is the type of calls
int main(void)
{
    int calls = 4; // I use semicolon to end the line/statement, Here's the variables's declaration
    calls = 5; // Update of the variable
    calls = calls + 1; // sum
    calls = calls - 3; // subtraction
    calls = calls * 2; // multiplication
    calls = calls / 2; // division
    // Each data type needs a placeholder int (%i), long (%li), float (%f), double (%lf), char (%c), string (%s)
    printf("calls is %i\n", calls); // '%i' is a placeholder for integer variable, calls in this example. 
}