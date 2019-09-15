/*
If a four-digit number is input through the keyboard, write a
program to obtain the sum of the first and last digit of this
number.
*/

#include <stdio.h>
int main ()
{
    int n, m, sum = 0, r, counter = 1;
    printf ("Enter any four-digit number\n");
    scanf ("%d", &n);
    m = n;
    if (n >= 1000 && n <= 9999) {
        while (n > 0) {
            r = n % 10;
            if (counter == 1 || counter == 4)
                sum = sum + r;
            n = n / 10;
            counter++;
        }
    printf ("Sum of first and last digit of %d is %d\n", m, sum);
    }
    else
        printf ("Entered number is not a four-digit number\n");
    return 0;
}
