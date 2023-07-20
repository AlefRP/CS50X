#include "cs50lib/cs50.h"
#include <stdio.h>

// Dealing with strings use ""
// Char use ''
// int main(void)
// {
//     char c = get_char("Do you agree?");

//     if (c == 'y')
//     {
//         printf("Agreed.\n");
//     }
//     else if (c == 'n')
//     {
//         printf("Not agreed.\n");
//     }
    
// }


// Using upper and lower, but bad design
// int main(void)
// {
//     char c = get_char("Do you agree?");

//     if (c == 'y')
//     {
//         printf("Agreed.\n");
//     }
//     else if (c == 'y')
//     {
//         printf("Agreed.\n");
//     }
//     else if (c == 'n')
//     {
//         printf("Not agreed.\n");
//     }
//     else if (c == 'N')
//     {
//         printf("Not agreed.\n");
//     }
    
// }

// The or '||' operator
int main(void)
{
    char c = get_char("Do you agree?");

    if (c == 'y' || c == 'Y')
    {
        printf("Agreed.\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Not agreed.\n");
    }
   
}