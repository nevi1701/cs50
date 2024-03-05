#include <stdio.h>
#include <cs50.h>

#define QUATER 25
#define DIM 10
#define NICKEL 5
#define PENNY 1

int main(void)
{
    int owed_change, coins = 0;
    do
    {
        owed_change = get_int("Change owed: ");
    } while (owed_change < 0);
    coins += (owed_change / QUATER);
    owed_change = (owed_change % QUATER);
    coins += (owed_change / DIM);
    owed_change = (owed_change % DIM);
    coins += (owed_change / NICKEL);
    owed_change = (owed_change % NICKEL);
    coins += (owed_change / PENNY);
    printf("%d\n", coins);
}
