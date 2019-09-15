/*
Given the coordinates (x, y) of a center of a circle and it’s radius,
write a program which will determine whether a point lies inside
the circle, on the circle or outside the circle.

(Hint: Use sqrt( ) and pow( ) functions)
*/

#include <stdio.h>
#include <math.h>
int main ()
{
    int x, y, x1, y1;
    float r, d;
    printf ("Enter any point\n");
    scanf ("%d%d", &x1, &y1);
    printf ("Enter the co-ordinates of the center of the circle\n");
    scanf ("%d%d", &x, &y);
    printf ("Enter the radius of the circle\n");
    scanf ("%f", &r);
    d = sqrt(pow((x1 - x), 2) + pow((y1 - y), 2));
    if (d < r)
        printf ("(%d, %d) lies inside the circle\n", x1, y1);
    else if (d == r)
        printf ("(%d, %d) lies on the circle\n", x1, y1);
    else if (d > r)
        printf ("(%d, %d) lies outside the circle\n", x1, y1);
    return 0;
}
