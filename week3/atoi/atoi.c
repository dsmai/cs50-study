#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int convert(string input);

int main(void)
{
    string input = get_string("Enter a positive integer: ");

    for (int i = 0, n = strlen(input); i < n; i++)
    {
        if (!isdigit(input[i]))
        {
            printf("Invalid Input!\n");
            return 1;
        }
    }

    // Convert string to int
    printf("%i\n", convert(input));
}

int convert(string input)
{
    // TODO
    int length = strlen(input);
    if (length > 0)
    {
        int last_indx = length - 1;
        int last = input[last_indx] - '0';
        input[last_indx] = '\0';
        return (convert(input) * 10 + last);
    }
    else
    {
        return 0;
    }
}