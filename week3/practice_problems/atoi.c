#include <cs50.h>
#include <stdio.h>
#include <string.h>

long exp_int(int base, int exp);
int atoi(string s);

int main(void)
{
    string s = get_string("Please enter a positive integer: ");
    printf("%i\n", atoi(s));
}

int atoi(string s)
{
    int length = strlen(s);
    int num;

    // looping
    for (int i = 0; i < length; i++)
    {
        num = num + (s[i] - '0') * exp_int(10, length - 1 - i);
    }
    return num;
}

// int atoi_recursive(string s)
// {

// }

long exp_int(int base, int exp)
{
    long result = 1;
    for (int i = 0; i < exp; i++)
    {
        result = result * base;
    }
    return result;
}
