/*
If the three sides of a triangle are entered through the
keyboard, write a program to check whether the triangle is
valid or not. The triangle is valid if the sum of two sides is
greater than the largest of the three sides.
*/

#include <stdio.h>
int main ()
{
    float a, b, c;
    printf ("Enter the 3 sides of the triangle\n");
    scanf ("%f%f%f", &a, &b, &c);
    if ((a > b && a > c && b + c > a) || (b > a && b > c && c + a > b) || (c > a && c > b && a + b > c))
        printf ("The triangle is valid\n");
    else
        printf ("The triangle is invalid");
    return 0;
}
