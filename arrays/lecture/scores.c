#include <cs50.h>
#include <stdio.h>

// Using Global variable
const int N = 3;

// Decalring Array tradicional way
// int ARRAY[] = {72, 73, 33};

// Using Array
int main(void)
{
    int scores[N];

    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("Score: ");  
    }

    // scores[0] = get_int("Score: ");
    // scores[1] = get_int("Score: ");
    // scores[2] = get_int("Score: ");

    // scores[0] = 72;
    // scores[1] = 73;
    // scores[2] = 33;

    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) /(float) N);
}

// int main(void)
// {
//     int score1 = 72;
//     int score2 = 73;
//     int score3 = 33;

//     printf("Average: %f\n", (score1 + score2 + score3) / 3.0);
// }

// const int N = 3; //It is common to declare global variables at the beginning - Magic Number

// float average(int length, int array[]); // I need to declare a prototype 'cause I'll make it after main

// int main(void)
// {
//     // Bad Design
//     /* int score1 = 72;
//     int score2 = 73;
//     int score3 = 33; */

//     // Array
//     /* int scores[3]; // Declare an array that stores 3 scores
//     scores[0] = get_int("What's your score? ");
//     scores[1] = get_int("What's your score? ");
//     scores[2] = get_int("What's your score? "); */

//     int scores[N];
//     for (int i = 0; i < 3; i++)
//     {
//         scores[i] = get_int("What's your score? ");
//     }

//     // printf("Average: %f\n", (score1 + score2 + score3) / 3.0);
//     //In C I need always to remenber the lenght of an array
//     printf("Average: %f\n", average(N, scores)); //casting typing
// }

/* float average(int array[]) // How to make a function expects to an Array as Input
{
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += array[i]; //Or sum = sum + array[i]
    }
    return sum / (float) N;
} */

// I have puted two arguments in the function to make average indepedent
// float average(int length, int array[])
// {
//     int sum = 0;
//     for (int i = 0; i < length; i++)
//     {
//         sum += array[i]; //Or sum = sum + array[i]
//     }
//     return sum / (float) length;
// }