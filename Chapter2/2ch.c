/*
Find the absolute value of a number entered through the
keyboard.
*/

#include <stdio.h>
int main ()
{
    int number, absolute;
    printf ("Enter any number\n");
    scanf ("%d", &number);
    if (number > 0)
        absolute = number;
    else
        absolute = number - 2 * number;
    printf ("Absolute value of %d is %d\n", number, absolute);
    return 0;
}
