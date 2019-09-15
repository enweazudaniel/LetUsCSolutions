/*
An Insurance company follows following rules to calculate premium.
(1) If a person’s health is excellent and the person is between
25 and 35 years of age and lives in a city and is a male
then the premium is Rs. 4 per thousand and his policy
amount cannot exceed Rs. 2 lakhs.
(2) If a person satisfies all the above conditions except that
the sex is female then the premium is Rs. 3 per thousand
and her policy amount cannot exceed Rs. 1 lakh.
(3) If a person’s health is poor and the person is between 25
and 35 years of age and lives in a village and is a male
then the premium is Rs. 6 per thousand and his policy
cannot exceed Rs. 10,000.
(4) In all other cases the person is not insured.
Write a program to output whether the person should be
insured or not, his/her premium rate and maximum amount
for which he/she can be insured.
*/

#include <stdio.h>
#include <string.h>
int main ()
{
    char health[10], sex[6], lives[8];
    int age;
    printf ("Enter the condition of health of the person\n");
    scanf ("%s", health);
    printf ("Enter the age of the person\n");
    scanf ("%d", &age);
    printf ("Enter the sex of the person\n");
    scanf ("%s", sex);
    printf ("Where does the person live?\n");
    scanf ("%s", lives);
    if (strcmp (health, "excellent") == 0 && age >= 25 && age <= 35 && strcmp (lives, "city") == 0 && strcmp (sex, "male") == 0)
        printf ("Premium = Rs. 4 per thousand, Policy amount = upto Rs. 2 lakhs\n");
    else if (strcmp (health, "excellent") == 0 && age >= 25 && age <= 35 && strcmp (lives, "city") == 0 && strcmp (sex, "female") == 0)
        printf ("Premium = Rs. 3 per thousand, Policy amount = upto Rs. 1 lakh\n");
    else if (strcmp (health, "poor") == 0 && age >= 25 && age <= 35 && strcmp (lives, "village") == 0 && strcmp (sex, "male") == 0)
        printf ("Premium = Rs. 6 per thousand, Policy amount = upto Rs. 10000\n");
    else
        printf ("The person cannot be insured\n");
    return 0;
}
