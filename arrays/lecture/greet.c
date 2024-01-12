#include <cs50.h>
#include <stdio.h>

// Taking args from command line
// int main(int argc, string argv[])
// {
//     printf("Hello, %s\n", argv[1]); // argv[0] is the name of the program
// }


// Main always returns 0, an integer, that's why we use int
// int main(int argc, string argv[])
// {
//     if (argc == 2)
//     {
//         printf("Hello, %s\n", argv[1]);
//     }
//     else
//     {
//         printf("hello, world\n");
//     }
// }

// Using loop that interates argc number of times
int main(int argc, string argv[])
{
    for (int i = 0; i < argc; i++)
    {
        printf("Hello, %s\n", argv[i]);
    }
}