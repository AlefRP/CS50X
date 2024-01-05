#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("What's x? ");
    int y = get_int("What's y? ");

    if (x < y)
    {
        printf("x is less than y\n");
    }
    else if (x > y)
    {
        printf("x is greater than y\n");
    }
    else
    {
        printf("x is equal to y\n");
    }
}

// int main(void)
// {
//     int x = get_int("What's x? ");
//     int y = get_int("What's y? ");

//     if (x < y)
//     {
//         printf("x is less than y");
//     }
//     else
//     {
//         printf("x is not less than y");
//     }
// }

// int main(void)
// {
//     int x = get_int("What's x? ");
//     int y = get_int("What's y? ");

//     if (x < y)
//     {
//         printf("x is less than y\n");
//     }
//     if (x > y)
//     {
//         printf("x is greater than y\n");
//     }
//     if (x == y)
//     {
//         printf("x is equal to y\n");
//     }
// }