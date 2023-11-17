#include <cs50.h>
#include <stdio.h>


// enum { SIZE = 8 };
// #define SIZE 8;
// Define constant
// const int SIZE = 8;

int sort_selection(int arr[], int low, int length);

int main(void)
{
    enum { SIZE = 8 };
    int count = 0;
    int array[SIZE] = {0, 1, 2, 3, 4, 5, 6, 7};
    for (int i = 0; i < SIZE; i++)
    {
        printf("%i ", array[i]);
    }
    count = sort_selection(array, 0, SIZE);
    printf("\n%i\n", count);
    for (int i = 0; i < SIZE; i++)
    {
        printf("%i ", array[i]);
    }
    printf("\n");
}

int sort_selection(int arr[], int low, int length)
{
    static int count = 0;
    count++;
    if (low < length - 1)
    {
        // main sort logic goes here
        int min = arr[low];
        int min_index = low;

        // loop through array
        for (int i = low + 1; i < length; i++)
        {
            if (arr[i] < min)
            {
                min = arr[i];
                min_index = i;
            }
        }

        // swap if min_index is not low index
        if (min_index != low)
        {
            arr[min_index] = arr[low];
            arr[low] = min;
        }

        // call recursive, now move 1st index of array to +1
        return sort_selection(arr, low + 1, length);
    }
    else
    {
        return count;
    }
}