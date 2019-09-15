/*
According to the Gregorian calendar, it was Monday on the
date 01/01/1900. If any year is input through the keyboard
write a program to find out what is the day on 1st January of
this year.
*/

#include <stdio.h>
int main ()
{
    int year, year1 = 1900, year2, diff, normalised, count = 0;
    year2 = year1;
    printf ("Enter any year greater than %d\n", year2);
    scanf ("%d", &year);
    if (year > year1) {
        while (year1 < year) {
            if (year1 % 4 == 0) {
                if (year1 % 100 != 0)
                    count++;
                else {
                    if (year1 % 400 == 0)
                        count++;
                }
            }
        year1++;
        }
        diff = year - year2 + count;
        normalised = diff % 7;
        switch (normalised) {
            case 1:
                printf ("1st January of %d = Tuesday\n", year);
                break;
            case 2:
                printf ("1st January of %d = Wednesday\n", year);
                break;
            case 3:
                printf ("1st January of %d = Thursday\n", year);
                break;
            case 4:
                printf ("1st January of %d = Friday\n", year);
                break;
            case 5:
                printf ("1st January of %d = Saturday\n", year);
                break;
            case 6:
                printf ("1st January of %d = Sunday\n", year);
                break;
            default:
                printf ("1st January of %d = Monday\n", year);
        }
    }
    else
        printf ("Entered year is not greater than %d\n", year2);
    return 0;
}
