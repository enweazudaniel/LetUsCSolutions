/*
Given a point (x, y), write a program to find out if it lies on the
x-axis, y-axis or at the origin, viz. (0, 0).
*/

#include <stdio.h>
int main ()
{
    int x ,y;
    printf ("Enter any point\n");
    scanf ("%d%d", &x, &y);
    if (x != 0 && y == 0)
        printf ("(%d, %d) lies on x-axis\n", x, y);
    else if (y != 0 && x == 0)
        printf ("(%d, %d) lies on y-axis\n", x, y);
    else if (x == 0 && y == 0)
        printf ("(%d, %d) lies on the origin\n", x, y);
    else
        printf ("(%d, %d) doesn't lie on x-axis, y-axis or origin\n", x, y);
    return 0;
}
