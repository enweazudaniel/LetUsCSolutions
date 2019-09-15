/*
The distance between two cities (in km.) is input through the
keyboard. Write a program to convert and print this distance
in meters, feet, inches and centimeters.
*/

#include<stdio.h>
int main()
{
    float distance, meters, feet, inches, centimeters;
    printf("Enter the distance between two cities in kilometers\n");
    scanf("%f", &distance);
    meters = distance * 1000;
    feet = meters * 3.281;
    inches = feet * 12;
    centimeters = meters * 100;
    printf("The distance between two cities is %0.2f meters or %0.2f feet or %0.2f inches or %0.2f centimeters\n", meters, feet, inches, centimeters);
    return 0;
}
