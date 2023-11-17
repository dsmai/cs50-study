#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int factorial(int num);
int fib(int index);

int main(int argc, string argv[])
{
    int number = atoi(argv[1]);
    if (argc > 2)
    {
        printf("Invalid amount of command line input.\n");
        return -1;
    }
    else if (number < 1)
    {
        printf("Invalid input. Number need to be positive.\n");
        return -1;
    }
    else
    {
        printf("Factorial: %i\n", factorial(number));
        printf("%ith fibonacci number is: %i\n", number, fib(number));
    }
}

int factorial(int num)
{
    if (num == 1)
        // this the the base case, preventing infinite loop
        return 1;
    else
        // this is the recursive case
        return num * factorial(num-1);
}

int fib(int index)
{
    if (index == 0)
        return 0;
    else if (index == 1)
        return 1;
    else
        return fib(index - 1) + fib(index - 2);
}