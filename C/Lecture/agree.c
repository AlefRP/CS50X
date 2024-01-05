#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c = get_char("Do you agree? ");

    if (c == 'y' || c == 'Y')
    {
        printf("Agreed.\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Not agreed.\n");
    }
}

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
//     else if (c == 'Y')
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
// The and '&&' operator
// int main(void)
// {
//     char c = get_char("Do you agree?");

//     if (c == 'y' || c == 'Y')
//     {
//         printf("Agreed.\n");
//     }
//     else if (c == 'n' || c == 'N')
//     {
//         printf("Not agreed.\n");
//     }
   
// }