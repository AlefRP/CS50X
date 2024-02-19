#include <cs50.h>
#include <stdio.h>

// typedef struct
// {
//     char *s;
// }
// string;

int main(void)
{
    // string s = "HI!";
    // It was always char *s = "HI!";
    char *s = "HI!";

    // Print using pointer syntax
    printf("%c", *s);
    printf("%c", *(s + 1));
    printf("%c\n", *(s + 2));

    // printf("%c", s[0]);
    // printf("%c", s[1]);
    // printf("%c\n", s[2]);

    // printf("%s\n", s);
    // printf("%p\n", s);
    // printf("%p\n", &s[0]);
    // printf("%p\n", &s[1]);
    // printf("%p\n", &s[2]);
    // printf("%p\n", &s[3]);
}

// int main(void)
// {
//     int n = 50;
//     // int* p = &n; //same thing as down (int * p - or this)
//     int *p = &n; // & is used to get the address - * is used to make a pointer, stores in p the adress of n
//     // printf("%i\n", n);
//     // printf("%p\n", &n); // %p is used to print the address - c suport pointers
//     printf("%p\n", p);
//     printf("%i\n", *p); // to see what is in memory - the adress for wich p is pointing
// }