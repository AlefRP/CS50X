#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h> // To use malloc
#include <string.h>

int main(void)
{
    // string s = get_string("s: ");
    // string t = s;

    char *s = get_string("s: ");
    // char *t = s; // It does not create a copy, is pointing tho the same adress
    char *t = malloc(strlen(s) + 1); // To effectively create a copy
    int n = strlen(s) + 1; // To also get '\0'

    for (int i = 0; i < n; i++)
    {
        t[i] = s[i];
    }

    // t[0] = toupper(t[0]);
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    printf("%s\n", s);
    printf("%s\n", t);
}
