#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string phrase = get_string("Enter a phrase: ");
    int lenght = strlen(phrase);
    char sorted[lenght];
    for (int i = 0; i < lenght - 1; i++)
    {
        // Check if characters is alphabetical
        if (phrase[i] > phrase[i + 1])
        {
            printf("Not in alphabetical order.\n");
            return 0;
        }
        // Wrong way, cause it will end before checking every character
        // else
        // {
        //     printf("In alphabetical order.\n");
        //     return 0;
        // }
        printf("Alphabetical order.\n");
    }
}