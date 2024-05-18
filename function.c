#include <stdio.h>
#include <stdlib.h>

int cyear = 2023;

char calAge(char name[], int byear);

int main()
{
    char age_str = calAge("Dineth", 2001);
    return 0;
}

char calAge(char name[], int byear)
{
    int age = byear - cyear;
    char str[100];
    sprintf(str, "%s , %d", name, age);
    return str;
}