/*
If the marks obtained by a student in five different subjects
are input through the keyboard, find out the aggregate marks
and percentage marks obtained by the student. Assume that
the maximum marks that can be obtained by a student in each
subject is 100.
*/

#include<stdio.h>
int main()
{
    int sub1, sub2, sub3, sub4, sub5, total;
    float agg, percent;
    printf("Enter the marks obtained by the student in five different subjects\n");
    scanf("%d%d%d%d%d", &sub1, &sub2, &sub3, &sub4, &sub5);
    total = sub1 + sub2 + sub3 + sub4 + sub5;
    agg = total/5.00;
    percent = (total/500.00) * 100.00;
    printf("The student's aggregrate marks is %0.2f and percentage marks is %0.2f\n", agg, percent);
    return 0;
}
