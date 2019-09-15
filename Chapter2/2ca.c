/*
If cost price and selling price of an item is input through the
keyboard, write a program to determine whether the seller has
made profit or incurred loss. Also determine how much profit
he made or loss he incurred.
*/

#include <stdio.h>
int main ()
{
    float cost_price, selling_price;
    printf ("Enter cost price of the item\n");
    scanf ("%f", &cost_price);
    printf ("Enter selling price of the item\n");
    scanf ("%f", &selling_price);
    if (selling_price > cost_price)
       printf ("The seller has made %.2f profit\n", selling_price - cost_price);
    else
       printf ("The seller has made %.2f loss\n", cost_price - selling_price);
    return 0;
}
