#include <cs50.h>
#include <stdio.h>

int binary_search(int arr[], int low_idx, int high_idx, int search_num);

int main(void)
{
    int test_arr[] = {1, 4, 7, 9, 23, 47, 56, 90};
    int search_num = get_int("Enter a number to search: ");
    printf("%i\n", binary_search(test_arr, 0, 7, search_num));
}

int binary_search(int arr[], int low_idx, int high_idx, int search_num)
{
    // static int count = 0; // Use static variable to count how 
    // count++;              // many times function is called.   
    if (high_idx >= low_idx)
    {
        int mid = (high_idx + low_idx) / 2;
        if (arr[mid] == search_num)
        {
            return mid;
        }
        else if (arr[mid] > search_num)
        {
            return binary_search(arr, low_idx, mid - 1, search_num);
        }
        else
        {
            return binary_search(arr, mid + 1, high_idx, search_num);
        }
    }
    else
    {
        return -1;
    }
}