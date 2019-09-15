/*
If a five-digit number is input through the keyboard, write a
program to print a new number by adding one to each of its
digits. For example if the number that is input is 12391 then
the output should be displayed as 23402.
*/

#include <stdio.h>
int main ()
{
    int n, num = 0, r, diff = 1;
    printf("Enter any five-digit number\n");
    scanf("%d", &n);
    if (n >= 10000 && n <= 99999) {
        while (n > 0) {
            r = n % 10 + 1;
            if (r == 10)
                r = 0;
            num = num + r * diff;
            diff = diff * 10;
            n = n / 10;
        }
       printf("Resultant number is %d\n", num);
    }
    else
        printf ("Entered number is not a five-digit number\n");
    return 0;
}
