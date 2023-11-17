#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

// Declare constant
const int N = 5;

// Prototype
int get_sum(int array[], int length);
float get_average(int array[], int length);
int get_length(string s);

int main(int argc, string argv[])
{
    int scores[N];
    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("Enter your score: ");
    }
    // string name = get_string("Please enter your name: ");
    // printf("Length of your name: %i\n", get_length(name));
    // printf("Length of your name: %i\n", strlen(name));
    printf("Hello %s %s\n", argv[1], argv[2]);
    printf("Average score: %f\n", get_average(scores, N));
}

int get_sum(int array[], int length)
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return sum;
}

float get_average(int array[], int length)
{
    float average = get_sum(array, length) / (float) length;
    return average;
}

// get length of a string
int get_length(string s)
{
    int count = 0;
    while (s[count] != '\0')
    {
        count++;
    }
    return count;
}