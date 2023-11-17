#include <cs50.h>
#include <stdio.h>

// Implement bubble sort using recursion
void sort_bubble(int array[], int length);

int main(void)
{
    enum { SIZE = 8 };
    int array[SIZE] = {20, 1, 19, 3, 4, 71, 6, 7};
    for (int i = 0; i < SIZE; i++)
    {
        printf("%i ", array[i]);
    }
    printf("\n");
    sort_bubble(array, SIZE);
    for (int i = 0; i < SIZE; i++)
    {
        printf("%i ", array[i]);
    }
    printf("\n");
}

void sort_bubble(int array[], int length)
{
    static int count = -1; // so that count does not lose value between each func invocation, does not reset to -1
    // to keep the count!
    while (count != 0)
    {
        count = 0;
        for (int i = 0; i < length - 1; i++) // check from [0] to [n-2]
        {
            if (array[i] > array[i+1])
            {
                // increment counter
                count++;
                // swap the pair
                int temp = array[i+1];
                array[i+1] = array[i];
                array[i] = temp;
            }
        }
        // after 1 loop, the highest value element bubbled to the end of the array
        // after that, only need to search for array size length - 1
        sort_bubble(array, length - 1);
    }
    return;
}