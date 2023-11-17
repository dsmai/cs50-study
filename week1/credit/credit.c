#include <cs50.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
// #include "credit.h"

long exp_int(int base, int exp);
int digit_cal(long num);
int get_digit(long num, int index);
bool check_sum_valid(long cnum);

// Write an algorithm to determine if a credit card number is valid

int main(void) 
{
    long cnum = get_long("Number: ");
    int cnum_len = digit_cal(cnum);
    if (check_sum_valid(cnum))
    {
        if (cnum_len == 15)
        {
            // Amex
            if (get_digit(cnum, cnum_len - 1) == 3)
            {
                if (get_digit(cnum, cnum_len - 2) == 4 || get_digit(cnum, cnum_len - 2) == 7)
                {
                    printf("AMEX\n");
                }
                else
                {
                    printf("INVALID\n");
                    return 0;
                }
            }
            else
            {
                printf("INVALID\n");
                return 0;
            }
        }

        else if (cnum_len == 16)
        {
            // Mastercard
            if (get_digit(cnum, cnum_len - 1) == 5)
            {
                for (int i = 1; i < 6; i++)
                {
                    if (get_digit(cnum, cnum_len - 2) == i)
                    {
                        printf("MASTERCARD\n");
                        return 0;
                    }
                }
                printf("INVALID\n");
                return 0;
            }
            else if (get_digit(cnum, cnum_len - 1) == 4)
            {
                printf("VISA\n");
            }
            else
            {
                printf("INVALID\n");
                return 0;
            }
        }

        else if (cnum_len == 13)
        {
            if (get_digit(cnum, cnum_len - 1) == 4)
            {
                printf("VISA\n");
            }
            else
            {
                printf("INVALID\n");
                return 0;
            }
        }

        else
        {
            printf("INVALID\n");
            return 0;
        }
    }
    else
    {
        printf("INVALID\n");
        return 0;
    }
}

bool check_sum_valid(long cnum)
{
    int sum1 = 0;
    int sum2 = 0;
    for (int i = 0; i < digit_cal(cnum); i++)
    {
        if (i % 2 == 0)
        {
            int digit = cnum / exp_int(10, i) % 10;
            sum1 += digit;
        }
        else
        {
            int digit = cnum / exp_int(10, i) % 10;
            sum2 += (digit * 2) / 10 + (digit * 2) % 10;
        }
    }
    return ((sum1 + sum2) % 10 == 0);
}

int digit_cal(long num)
{
    int count = 0;
    do
    {
        num = num / 10;
        count++;
    }
    while (num > 0);

    return count;
}

int get_digit(long num, int index)
{
    return (num / exp_int(10, index) % 10);
}

long exp_int(int base, int exp)
{
    long result = 1;
    for (int i = 0; i < exp; i++)
    {
        result = result * base;
    }
    return result;
}


