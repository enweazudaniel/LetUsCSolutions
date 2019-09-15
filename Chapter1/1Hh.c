/*
If a five-digit number is input through the keyboard, write a
program to reverse the number.
*/

#include <stdio.h>
int main ()
{
    int n, m, rev = 0, r;
    printf ("Enter any five-digit number\n");
    scanf ("%d", &n);
    m = n;
    if (n >= 10000 && n <= 99999) {
        while (n > 0) {
            r = n % 10;
            rev = rev * 10 + r;
            n = n / 10;
        }
    printf ("Reverse of %d is %d\n", m, rev);
    }
    else
        printf ("Entered number is not a five-digit number\n");
    return 0;
}
