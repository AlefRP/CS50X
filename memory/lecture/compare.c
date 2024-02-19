#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // string s = get_string("s: ");
    // string t = get_string("t: ");

    char *s = get_string("s: ");
    char *t = get_string("t: ");

    // printf("%s\n", s);
    // printf("%s\n", t);

    // TO see the adresses
    printf("%p\n", s);
    printf("%p\n", t);

    // Dont work because s and t are pointers, so
    // if (strcmp(s, t) == 0)
    // {
    //     printf("Same\n");
    // }
    // else
    // {
    //     printf("Different\n");
    // }

    // if (s == t)
    // {
    //     printf("Same\n");
    // }
    // else
    // {
    //     printf("Different\n");
    // }

//     int i = get_int("i: ");
//     int j = get_int("j: ");

//     if (i == j)
//     {
//         printf("Same\n");
//     }
//     else
//     {
//         printf("Different\n");
//     }
}