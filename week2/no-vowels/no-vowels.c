// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>
#include <string.h>

string replace(string word);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Error, please enter another one.\n");
        return 1;
    }
    else
    {
        printf("%s\n", replace(argv[1]));
        return 0;
    }
}

string replace(string word)
{
    for (int i = 0, n = strlen(word); i < n; i++)
    {
        switch (word[i])
        {
            case 'a':
                word[i] = '6';
                break;

            case 'e':
                word[i] = '3';
                break;

            case 'i':
                word[i] = '1';
                break;

            case 'o':
                word[i] = '0';
                break;

            default:
                break;
        }
    }
    return word;
}