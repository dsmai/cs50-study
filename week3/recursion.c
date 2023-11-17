#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

// Recursion is function that calls itself

void draw(int num);

int main(int argc, string argv[])
{
    int height = atoi(argv[1]);
    draw(height);
}

void draw(int num)
{
    // Pyramid of height 4 =  pyramid of height 3 + another row of 4 bricks
    if (num <= 0)
    {
        return; // base case or exit case
    }
    else
    {
        draw(num-1); // calling recursively

        for (int i = 0; i < num; i++)
        {
            printf("#");
        }
        printf("\n");
    }
}