/*
A library charges a fine for every book returned late. For first
5 days the fine is 50 paise, for 6-10 days fine is one rupee and
above 10 days fine is 5 rupees. If you return the book after 30
days your membership will be cancelled. Write a program to
accept the number of days the member is late to return the
book and display the fine or the appropriate message.
*/

#include <stdio.h>
int main ()
{
    int fine;
    printf ("Enter the no. of days the member is late to return the book\n");
    scanf ("%d", &fine);
    if (fine >= 1 && fine <= 5)
        printf ("Required fine is 50 paise\n");
    else if (fine >= 6 && fine <= 10)
        printf ("Required fine is Rs. 1\n");
    else if (fine >= 11 && fine <= 30)
        printf ("Required fine is Rs. 5\n");
    else if (fine >= 31)
        printf ("Your membership has been cancelled!\n");
    return 0;
}
