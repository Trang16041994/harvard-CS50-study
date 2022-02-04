#include <cs50.h>
#include <stdio.h>

int get_cents(void)
{
    int i = get_int("input user");
    while(i < 0)
    {
        i = get_int("input user");
    }
    return i;
    }
int calculate_quarters(int cents)
{
    int i = cents;
    int solanlap = 0;
   while (i >= 25)
   {
   solanlap = solanlap + 1;
   i = i - 25;
   }
      return solanlap;
}
int calculate_dimes(int cents)
{
    int i = cents;
    int solanlap = 0;
    while (i >= 10)
    {
    solanlap = solanlap + 1;
    i = i - 10;
    }
        return solanlap;
}
int calculate_nickels(int cents)
{
    int i = cents;
    int solanlap = 0;
    while (i >= 5)
    {
    solanlap = solanlap + 1;
    i = i - 5;
    }
        return solanlap;
}
int calculate_pennies(int cents)
{
    int i = cents;
    int solanlap = 0;
    while (i >= 1)
    {
        solanlap = solanlap + 1;
        i = i - 1;
    }
    return solanlap;
}
int main(void)
{
    // int i = get_int ("how many cent the customer is owed? \n");
    // Ask how many cents the customer is owed
    int cents = get_cents();
    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;
    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;
    //printf("cents = %i\n", cents);
   // printf("quarters = %i\n", quarters);
    //printf("dimes = %i\n", dimes);
    //printf("nickels = %i\n", nickels);
    //printf("pennies = %i\n", pennies);

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}