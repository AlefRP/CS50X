#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};

    string s = get_string("String: ");

    // Linear search
    for (int i = 0; i < 6; i++)
    {
        if (strcmp(strings[i], s) == 0)
        {
            printf("Found!\n");
            return 0;
        }
    }
    printf("Not found!\n");
    return 1;
}


// int main(void)
// {
//     int numbers[] = {20, 500, 10, 100, 1, 50};

//     int n = get_int("Number: ");

//     // Linear search
//     for (int i = 0; i < 6; i++)
//     {
//         if (numbers[i] == n)
//         {
//             printf("Found!\n");
//             // 0 is returned by main when the program worked, I can stop it prematuringly
//             return 0; // To finish the program here if the number is found
//         }
//     }
//     printf("Not found!\n");
//     return 1; // any value other than 0 will stop the program indicating failiure
// }