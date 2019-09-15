/*
In a town, the percentage of men is 52. The percentage of
total literacy is 48. If total percentage of literate men is 35 of
the total population, write a program to find the total number of illiterate men and women if the population of the town is
80,000.
*/

#include <stdio.h>
int main ()
{
    int literacy = 48, illiteracy, population = 80000, illiterate;
    illiteracy = 100 - literacy;
    illiterate = illiteracy * population / 100;
    printf ("Total number of illiterate men and women of the town is %d\n", illiterate);
    return 0;
}   
