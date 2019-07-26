#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)

{

float input;
int cents, quarters, dimes, nickels, pennies;

    do
    {
        input = get_float ("Change owed: ");
        cents = round (input*100);
    }
    while (input <=0);
    {
        printf("User input: %.2f\n", input);
    }

    quarters = cents / 25;
    dimes = (cents % 25) / 10;
    nickels = ((cents % 25) % 10) / 5;
    pennies = ((cents % 25) % 10) % 5;

    {
        printf("Quarters: %d\n", quarters);
        printf("Dimes: %d\n", dimes);
        printf("Nickels: %d\n", nickels);
        printf("Pennies: %d\n", pennies);
        printf("Total coins: %d\n", quarters + dimes + nickels + pennies);
    }
}
