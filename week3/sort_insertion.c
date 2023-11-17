#include <cs50.h>
#include <stdio.h>

void print_array(int arr[], int length);
void sort_insertion(int arr[], int length);

int main(void)
{
    int array[] = {10, 7, 3, 13, 2, 8, 5};
    print_array(array, 7);
    sort_insertion(array, 7);
    print_array(array, 7);
}

void sort_insertion(int arr[], int length)
{
    int i, key, j;
    // loop through array starting from pos [1]
    for (int i = 0; i < length; i++)
    {
        key = arr[i];
        j = i - 1;
        while (key < arr[j] && j >= 0)
        {
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = key;
    }
}

void print_array(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%i ", arr[i]);
    }
    printf("\n");
}