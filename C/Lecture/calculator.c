#include <cs50.h>
#include <stdio.h>

// for 2000000 + 200000 I'll not get an answer because of overflow (more number than the bits my computer has)
//so i use 'long'
/* int main(void)
{
    int x = get_int("x? ");
    int y = get_int("y? ");

    printf("%i\n", x + y);
}
 */

int main(void)
{
    int x = get_int("x? ");
    int y = get_int("y? ");

    // float z = x / y;
    // float z =  (float) x / (float) y; // Float for decimals
    double z =  (double) x / (double) y; // Float for decimals
    // printf("%f\n", z);
    printf("%.16f\n", z); // 6 decimal places
}

// int add(int x, int y);

// int main(void)
// {
//     int x = get_long("x? ");
//     int y = get_long("y? ");

//     // int z  = add(x, y);
//     printf("%i\n", add(x, y));
// }

// int add(int x, int y)
// {
//     return x + y;
// }

// Using long
// int main(void)
// {
//     long x = get_long("x? ");
//     long y = get_long("y? ");

//     // printf("%li\n", x + y);
//     // dealing with truncation
//     // float z = x / y; - it doesn't work, I need to convert x and y in float
//     //float z = (float) x / (float) y; // This is how to convert a variable of one type to another
//     // printf("%f\n", z);
//     double z = (double) x / (double) y;
//     printf("%.20f\n", z); // To see 20 decimal digits - 1/3 does not show 0.333 because the compute has not enough bits
//     //to fix we use double, is kind of long, accept mor bits
// }