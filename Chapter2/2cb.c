/*
Any integer is input through the keyboard. Write a program to
find out whether it is an odd number or even number.
*/

#include <stdio.h>
int main ()
{
    int integer;
    printf ("Enter an integer\n");
    scanf ("%d", &integer);
    if (integer % 2 == 0)
        printf ("%d is an even integer\n", integer);
    else
        printf ("%d is an odd integer\n", integer);
    return 0;
}
