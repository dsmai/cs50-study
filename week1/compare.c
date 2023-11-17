#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int day = get_int("What is your day: ");
    int month = get_int("What is your month: ");
    int year = get_int("What is your year: ");

    if (day > 0 && day < 32)
    {
        printf("Your %i day is valid.\n", day);
    }
        if (month > 0 && month < 13)
    {
        printf("Your %i month is valid.\n", month);
    }
        if (year > 0)
    {
        printf("Your %i year is not valid.\n", year);
    }
}