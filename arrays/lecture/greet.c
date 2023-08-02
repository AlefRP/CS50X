#include <cs50.h>
#include <stdio.h>

// Taking args from command line
/* int main(int argc, string argv[])
{
    printf("Hello, %s\n", argv[1]);
} */


// Main always returns 0, an integer, that's why we use int
int main(int argc, string argv[])
{
    if (argc == 2)
    {
        printf("Hello, %s\n", argv[1]);
    }
    else
    {
        printf("hello, world\n");
    }
}