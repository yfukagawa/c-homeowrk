/*
If you don't want others (or yourself) to change existing variable values, you can use the const keyword.
This will declare the variable as "constant", which means unchangeable and read-only.
It is considered good practice to declare them with uppercase; it is not required, but useful for code readability and common for C programmers.
*/

#include <stdio.h>

int main() {
    const float AVEDAYSPERYEAR = (float)((365*3)+366)/4;
    const int HOURSPERDAY = 24;
    const int MINSPERHOUR = 60;
    const int SECSPERMIN = 60;

    printf("%.2f", AVEDAYSPERYEAR);

    printf("\nHow many seconds per day? \n");
    printf("%i", SECSPERMIN*MINSPERHOUR*HOURSPERDAY);
    printf(" seconds \n");
    printf("\nIn average, how may seconds per year? \n");
    float x = (float)SECSPERMIN*MINSPERHOUR*HOURSPERDAY*AVEDAYSPERYEAR;
    printf("%.2f", x);
    printf(" seconds \n");
    }