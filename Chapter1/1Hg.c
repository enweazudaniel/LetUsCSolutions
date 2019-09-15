/*
If a five-digit number is input through the keyboard, write a
program to calculate the sum of its digits.
(Hint: Use the modulus operator ‘%’)
*/

#include <stdio.h>
int main ()
{
    int n, m, sum = 0, r;
    printf ("Enter any five-digit number\n");
    scanf ("%d", &n);
    m = n;
    if (n >= 10000 && n <= 99999) {
        while (n > 0) {
            r = n % 10;
            sum = sum + r;
            n = n / 10;
        }
    printf ("Sum of the digits of %d is %d\n", m, sum);
    }
    else
        printf ("Entered number is not a five-digit number\n");
    return 0;
}
