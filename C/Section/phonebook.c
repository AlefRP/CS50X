#include "cs50lib/cs50.h"
#include <stdio.h>

int main(void)
{
    string name = get_string("What's your name? ");
    int age = get_int("What's your age? ");
    age = age + 1;
    if (age >= 18 && age <= 120)
    {
        printf("Hello, %s!\n", name);
    }
    // long number = get_long("What's your number? "); // Because of overflow, a phone can be more than 2 bilions
    string number = get_string("What's your phone number? "); // Storing number using string
    printf("Age is %i. Name is %s. Phone number is %s\n", age, name, number);
    int i = 0;
    while (i < 10)
    {
        printf("%i\n", i);
        i = i + 1;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%i\n", i);
    }
    int n;
    do
    {
        n = get_int("n? ");
    }
    while (n <= 0);
    // Repeat 5 times
    for (int i = 0; i < 5; i++)
    {
        printf("%i\n", i);
    }
}