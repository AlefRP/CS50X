#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

void print_row(int bricks);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./mario <height>\n");
        return 1;
    }

    int height = atoi(argv[1]);  // atoi - convert string to integer

    for (int i = 0; i < height; i++)
    {
        print_row(i + 1);
    }
}

void print_row(int bricks)
{
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
    printf("\n");
}