#include <stdbool.h>
#include <stdio.h>


int main(void)
{
    // to use true in C i need a library stdbool
    while (true)
    {
        printf("meow\n");
    }
    // while (1)
    // {
    //     printf("meow\n");
    // }
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("meow\n");
    // }
}

// int main(void)
// {
//     int i = 0;
//     while (i < 3)
//     {
//         printf("meow\n");
//         i++;
//     }
// }

// Print meow 3 times
/*
int main(void)
{
    printf("meow\n");
    printf("meow\n");
    printf("meow\n");
}
*/

// while loop
/*
int main(void)
{
    int i = 0; // i = 3
    while (i < 3) // 'while (i > 0)' 'while (i <= 3) is wrong, counts four times'
    {
        printf("meow\n");
        // 'i =- 1 same as i--', 'i =- 1' same as 'i = i - 1'
        i++;
    }
}
*/

// For loops
/* int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        printf("meow\n");
    }
}
 */

// Forever loop
// To use the 'true' keyword, use <stdbool.h> library
// int main(void)
// {
//     while (true)
//     {
//         printf("meow\n");
//     }
      
// }
