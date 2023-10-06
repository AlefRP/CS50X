#include <cs50.h>
#include <stdio.h>

 // How to declare an array in C
 int main(void)
 {
    int length;
    do
    {
        length = get_int("Length: ");
    } while (length < 1);
    
    //Declare array
    int scores[length];
    for (int i = 0; i < length; i++)
    {
        if (i == 0)
        {
            //Set first value
            scores[i] = length;
        }
        else
        {
            // Make the current element as twice as previous
            scores[i] = 2 * scores[i - 1];
        }
        printf("%i\n", scores[i]);
    }
    
    /* int hours[] = {7, 9, 8, 7, 8}; */

    // How to print an array
    /* for (int i = 0; i < 5; i++)
    {
        printf("%i\n", hours[i]);
    } */
 }

// A string is an array of characters
 char name[] = {'a', 'l', 'e', 'f', '\0'};
 string name = "alef";

