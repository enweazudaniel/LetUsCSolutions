/*
A five-digit number is entered through the keyboard. Write a
program to obtain the reversed number and to determine
whether the original and reversed numbers are equal or not.
*/

#include <stdio.h>
int main ()
{
    int number, number1, reverse = 0, remainder;
    printf ("Enter a number\n");
    scanf ("%d", &number);
    number1 = number;
    if (number >= 10000 & number <= 99999) {
        while (number > 0) {
            remainder = number % 10;
            reverse = reverse * 10 + remainder;
            number = number / 10;
        }
        printf ("Reverse of %d is %d\n", number1, reverse);
        if (reverse == number1)
            printf("Original and reversed numbers are equal\n");
        else
            printf("Original and reversed numbers are not equal\n");
    }
    else
        printf ("Entered number is not a five-digit number\n");
    return 0;
}
            
