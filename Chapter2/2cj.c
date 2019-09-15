/*
Given three points (x1, y1), (x2, y2) and (x3, y3), write a
program to check if all the three points fall on one straight line.
*/

#include <stdio.h>
int main ()
{
    int x1, y1, x2, y2, x3, y3, collinearity;
    printf ("Enter 1st point\n");
    scanf ("%d%d", &x1, &y1);
    printf ("Enter 2nd point\n");
    scanf ("%d%d", &x2, &y2);
    printf ("Enter 3rd point\n");
    scanf ("%d%d", &x3, &y3);
    collinearity = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);
    if (collinearity == 0)
        printf ("(%d, %d), (%d, %d) and (%d, %d) fall on a straight line\n", x1, y1, x2, y2, x3, y3);
    else
        printf ("(%d, %d), (%d, %d) and (%d, %d) do not fall on a straight line\n", x1, y1, x2, y2, x3, y3);
    return 0;
}
