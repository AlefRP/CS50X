#include <cs50.h>
#include <stdio.h>
#include <string.h>

// I can create my own data-structire with typpdef - structs
typedef struct
{
    string name;
    int votes;
}
candidate;

int main(void)
{
    candidate president;
    
    president.name = "Carter";
    president.votes = 0;
    
    // I can create an array of structs
    // candidate candidates[] = {{"Carter", 0}, {"David", 0}, {"John", 0}};
    candidate candidates[3];

    candidates[0].name = "Carter";
    candidates[0].votes = 0;

    candidates[1].name = "David";
    candidates[1].votes = 0;

    candidates[2].name = "John";
    candidates[2].votes = 0;

    // string names[] = {"Carter", "David", "John"};
    // string numbers[] = {"+1-617-495-1000", "+1-617-495-1000", "+1-949-468-2750"};
}