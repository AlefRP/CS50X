#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("What is your name: ");
    int age = get_int("Whats is your age? ");
    string number = get_string("Whats is your phone number? ");

    printf("Name: %s\nAge: %i\nPhone number: %s\n", name, age, number);
}