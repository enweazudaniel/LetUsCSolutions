/*
If the total selling price of 15 items and the total profit earned
on them is input through the keyboard, write a program to
find the cost price of one item.
*/

#include <stdio.h>
int main ()
{
    float items = 15, total_selling_price, total_profit, total_cost, cost_price;
    printf ("Enter total selling price of %0.0f items\n", items);
    scanf ("%f", &total_selling_price);
    printf ("Enter total profit from selling those %0.0f items\n", items);
    scanf ("%f", &total_profit);
    total_cost = total_selling_price - total_profit;
    cost_price = total_cost / items;
    printf ("Cost price of one item = %0.2f\n", cost_price);
    return 0;
}
