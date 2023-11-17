#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int collatz(int num);

int main(int argc, string argv[])
{
    int num = atoi(argv[1]);
    printf("Steps it take: %i\n", collatz(num));
}

int collatz(int num)
{
    // base case
    if (num == 1)
        return 0;

    // recursive case 1, if num is even
    else if (num % 2 == 0)
        return 1 + collatz(num/2);

    // recursive case 2
    else
        return 1 + collatz(3*num + 1);
}