/*
The length  & breadth of a rectangle  and radius of a circle are input through the keyboard. Write a program  to calculate the area & perimeter of the rectangle, and  the area & circumference of the circle.
*/

#include<stdio.h>
int main()
{
    float length, breadth, radius, area_r, perimeter, pi, area_c, circumference;
    printf("Enter the length and breadth of the rectangle\n");
    scanf("%f%f", &length, &breadth);
    printf("Enter the radius of the circle\n");
    scanf("%f", &radius);
    area_r = length * breadth;
    perimeter = 2 * (length + breadth);
    pi = 22.0 / 7.0;
    area_c = pi * radius * radius;
    circumference = 2 * pi * radius;
    printf("Area and perimeter of the rectangle are %0.2f and %0.2f respectively\n", area_r, perimeter);
    printf("Area and circumference of the circle are %0.2f and %0.2f respectively\n", area_c, circumference);
    return 0;
}
