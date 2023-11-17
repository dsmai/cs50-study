#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int arr[] = {20, 40, 60, 5, 9, 11, 37};
    int num = get_int("Enter an integer number: ");

    // Implement linear search
    for (int i = 0; i < 7; i++)
    {
        if (num == arr[i])
        {
            printf("Found the number %i at index %i\n", num, i);
            return 0;
        }
    }
    printf("Not found!\n");
    return 1;
}