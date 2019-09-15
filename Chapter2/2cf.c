/*
If the ages of Ram, Shyam and Ajay are input through the
keyboard, write a program to determine the youngest of the
three.
*/

#include <stdio.h>
int main ()
{
    int ram, shyam, ajay;
    printf ("Enter the ages of Ram, Shyam and Ajay\n");
    scanf ("%d%d%d", &ram, &shyam, &ajay);
    if (ram < shyam) {
        if (ram < ajay)
            printf ("Ram is youngest\n");
        else /* if (ajay < ram) */
            printf ("Ajay is youngest\n");
    }
    else
        printf ("Shyam is youngest\n");
    return 0;
}
