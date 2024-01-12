#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// int main(void)
// {
//     string s = get_string("Before: ");
//     printf("After: ");
//     for (int i = 0, n = strlen(s); i < n; i++)
//     {
//         // if lowercase
//         if (s[i] >= 'a' && s[i] <= 'z')
//         {
//             printf("%c", s[i] - 32);
//         }
//         else
//         {
//             printf("%c", s[i]);
//         }
//     }
//     printf("\n");
// }


// Using Library - ctype
// int main(void)
// {
//     string s = get_string("Before: ");
//     printf("After: ");
//     for (int i = 0; i < strlen(s); i++)
//     {
//         if (islower(s[i]))
//         {
//             printf("%c", toupper(s[i]));
//         }
//         else
//         {
//             printf("%c", s[i]);
//         }
//     }
//     printf("\n");
// } 

// More efective
int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");
    for (int i = 0; i < strlen(s); i++)
    {
        printf("%c", toupper(s[i]));
    }
    printf("\n");
}

// Even More efective, because i'm  callig strlen(s) just once, storing it's value in a variable
// int main(void)
// {
//     string s = get_string("Before: ");
//     printf("After: ");
//     for (int i = 0, n = strlen(s); i < n; i++)
//     {
//         printf("%c", toupper(s[i]));
//     }
//     printf("\n");
// }