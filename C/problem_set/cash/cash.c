#include <cs50.h>
#include <stdio.h>

// Function declarations
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    int cents;
    // Prompt the user for change owed, in cents
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);

    // Calculate the number of coins needed
    int quarters = calculate_quarters(cents);
    cents -= quarters * 25;
    
    int dimes = calculate_dimes(cents);
    cents -= dimes * 10;

    int nickels = calculate_nickels(cents);
    cents -= nickels * 5;

    int pennies = calculate_pennies(cents);

    // Sum the number of coins
    int totalCoins = quarters + dimes + nickels + pennies;

    // Print the total number of coins
    printf("%i\n", totalCoins);
}

/**
 * Calculates the maximum number of quarters (25¢ coins) that can be used
 * to make up a given amount of change.
 *
 * @param cents The amount of change that needs to be made.
 * @return The number of quarters that can be used.
 */
int calculate_quarters(int cents)
{
    int quarters = 0;
    while (cents >= 25)
    {
        quarters++;
        cents -= 25;
    }
    return quarters;
}

/**
 * Calculates the maximum number of dimes (10¢ coins) that can be used
 * to make up the remaining change after quarters.
 *
 * @param cents The remaining amount of change after using quarters.
 * @return The number of dimes that can be used.
 */
int calculate_dimes(int cents)
{
    int dimes = 0;
    while (cents >= 10)
    {
        dimes++;
        cents -= 10;
    }
    return dimes;
}

/**
 * Calculates the maximum number of nickels (5¢ coins) that can be used
 * to make up the remaining change after quarters and dimes.
 *
 * @param cents The remaining amount of change after using quarters and dimes.
 * @return The number of nickels that can be used.
 */
int calculate_nickels(int cents)
{
    int nickels = 0;
    while (cents >= 5)
    {
        nickels++;
        cents -= 5;
    }
    return nickels;
}

/**
 * Calculates the number of pennies (1¢ coins) needed to make up the
 * remaining change after quarters, dimes, and nickels.
 *
 * @param cents The remaining amount of change after using the other coins.
 * @return The number of pennies that make up the remaining change.
 */
int calculate_pennies(int cents)
{
    return cents; // All remaining cents are pennies
}