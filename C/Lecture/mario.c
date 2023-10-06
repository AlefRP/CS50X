#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // int n = 3;
    //const int n = 3; // can't change

    // Get size of grid
    int n;
    do
    {
        int n = get_int("Size: ");
    } while (n < 1);

    // Print grid of bricks
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

// int main(void)
// {
//     for (int i = 0; i < 3; i++)
//     {
//         printf("#\n");
//     }
// }


/* int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        printf("?");
    }
    printf("\n");
} */

/* int main(void)
{
    // const int n = 3; // make n a constant, can't change
    int n = get_int("Size: ");
    while (n < 1)
    {
        n = get_int("Size: ");
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
} */

/* int main(void)
{
    // Get size of grid
    int n;
    // Using 'do while in C' for inputs
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);
    
    // Print grid of bricks
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
} */

// I declare functions here empty to tell the compiler that they will be made after, otherwise I'll need to put them in order
// int get_size(void);
// void print_grid(int size);

// int main(void)
// {
//     // Get size of grid
//     int n = get_size();

//     // Print grid of bricks
//     print_grid(n);
// }

// // How to make functions in C - I've made functions called get_size and print_grid
// int get_size(void)
// {
//     int n;
//     do
//     {
//         n = get_int("Size: ");
//     }
//     while (n < 1);
//     return n;
// }

// void print_grid(int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = 0; j < size; j++)
//         {
//             printf("#");
//         }
//         printf("\n");
//     }
// }