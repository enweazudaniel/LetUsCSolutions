/*
Two numbers are input through the keyboard into two
locations C and D. Write a program to interchange the
contents of C and D
*/

#include<stdio.h>
int main()
{
    int C, D;
    printf("Enter C\n");
    scanf("%d", &C);
    printf("Enter D\n");
    scanf("%d", &D);
    C = C + D;
    D = C - D;
    C = C - D;
    printf("C is now %d\n", C);
    printf("D is now %d\n", D);
    return 0;
}
