/*
A cashier has currency notes of denominations 10, 50 and
100. If the amount to be withdrawn is input through the
keyboard in hundreds, find the total number of currency notes
of each denomination the cashier will have to give to the
withdrawer.
*/

#include <stdio.h>
int main ()
{
    int tens, fifties, hundreds, withdraw;
    printf ("Enter the amount to be withdrawn in hundreds\n");
    scanf ("%d", &withdraw);
    tens = withdraw / 10;
    fifties = withdraw / 50;
    hundreds = withdraw / 100;
    if (withdraw % 100 == 0)
        printf ("Cashier will give %d tens or %d fifties or %d hundreds\n", tens, fifties, hundreds);
    else
        printf ("Entered amount is not in hundreds\n");
    return 0;
}
