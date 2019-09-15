/*
If the three sides of a triangle are entered through the
keyboard, write a program to check whether the triangle is
isosceles, equilateral, scalene or right angled triangle.
*/

#include <stdio.h>
int main ()
{
    int a, b, c;
    printf ("Enter the 3 sides of the triangle\n");
    scanf ("%d%d%d", &a, &b, &c);
    if (a == b || a == c || b == c)
        printf ("The triangle is isosceles\n");
    if (a == b && b == c && c == a)
        printf ("The triangle is equilateral\n");
    if (a != b && b != c && c != a)
        printf ("The triangle is scalene\n");
    if (a * a + b * b == c * c || b * b + c * c == a * a || c * c + a * a == b * b)
        printf ("The triangle is right-angled");
    return 0;
}
