#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    enum { SIZE = 6 };
    int arr[SIZE] = {5, 2, 1, 3, 6, 4};
    for (int i = 0; i < SIZE; i++)
    {
        printf("%i ", arr[i]);
    }
    printf("\n");
}

void mergeSort(int arr[], int low_idx, int high_idx)
{
    // sort left half of array
    // sort right half of array
    // merge sorted halves

    int mid_idx = (high_idx + low_idx) / 2;

    // base case: if only 1 number, consider sorted, or if 2 number, swap
    if (low_idx >= high_idx)
    {
        return;
    }
    // recursive case
    else
    {
        // sort left half
        mergeSort(arr, 0, mid_idx);

        // sort right half
        mergeSort(arr, mid_idx + 1, high_idx);

        // merge sorted halves, this function will modify the original array arr[], creating 2 spare arrays
        // what is the size of the 2 spare arrays?
        merge(arr, low_idx, mid_idx, high_idx);

    }
}

void merge(int arr[], int low_idx, int mid_idx, int high_idx)
{
    int length = (high_idx - low_idx + 2) / 2;
    // create 2 spare arrays of size length
    int arr1[length], arr2[length];
    int j = 0;
    int k = 0;

    // now fill up these 2 arrays
    for (int i = 0; i < length; i++)
    {
        arr1[i] = arr[low_idx + i];
        arr2[i] = arr[mid_idx + 1 + i];
    }

    // now merge by comparison
    for (int i = low_idx; i <= high_idx; i++)
    {
        if (arr1[j] < arr2[k])
        {
            arr[i] = arr1[j];
            j++;
        }
        else
        {
            arr[i] = arr2[k];
            k++;
        }
    }

    return;
}