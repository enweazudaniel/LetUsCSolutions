/*
Ramesh’s basic salary is input through the keyboard. His
dearness allowance is 40% of basic salary, and house rent
allowance is 20% of basic salary. Write a program to calculate
his gross salary.
*/

#include<stdio.h>
int main()
{
    float basic, dearness, rent, gross;
    printf("Enter Ramesh's basic salary in rupees\n");
    scanf("%f", &basic);
    dearness = basic * 0.4;
    rent = basic * 0.2;
    gross = basic + dearness + rent;
    printf("Ramesh's gross salary is Rs.%0.2f\n", gross);
    return 0;
}
