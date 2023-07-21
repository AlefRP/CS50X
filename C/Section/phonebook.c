#include "cs50lib/cs50.h"
#include <stdio.h>

int main(void)
{
    string name = get_string("What's your name? ");
    int age = get_int("What's your age? ");
    age = age + 1;
    // long number = get_long("What's your number? "); // Because of overflow, a phone can be more than 2 bilions
    string number = get_string("What's your phone number? "); // Storing number using string
    printf("Age is %i. Name is %s. Phone number is %s\n", age, name, number);
}