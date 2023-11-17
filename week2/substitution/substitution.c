#include <cs50.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

const int a_l_ascii = 97;
const int A_U_ASCCI = 65;

bool valid_input(string key);
string cipher(string text, string key);

int main(int argc, string argv[]) 
{
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n"); 
        return 1;
    }
    else if (!valid_input(argv[1]))
    {
        printf("Invalid key, Key must contain 26 distinguished alphabet character.\n"); 
        return 1;
    }
    else
    {
        string plaintext = get_string("plaintext: ");
        printf("ciphertext: %s\n", cipher(plaintext, argv[1]));
        return 0;
    }
}

bool valid_input(string key)
{
    int count[26] = {0};
    bool valid = false;
    int length = strlen(key);
    if (length != 26)
    {
        return valid;
    }
    else
    {
        for (int i = 0; i < length; i++)
        {
            if (!(key[i] >= 'a' && key[i] <= 'z') && !(key[i] >= 'A' && key[i] <= 'Z'))
            {
                return valid; // not valid
            }
            else
            {
                // here check if no duplicate letter
                count[toupper(key[i]) - A_U_ASCCI] += 1;
                if (count[toupper(key[i]) - A_U_ASCCI] == 2)
                {
                    return valid; // not valid
                }
            }
        }
        valid = true;
        return valid;
    }
}

string cipher(string text, string key)
{
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
        {
            if (islower(text[i]))
            {
                text[i] = tolower(key[text[i] - a_l_ascii]);
            }
            else
            {
                text[i] = toupper(key[text[i] - A_U_ASCCI]);
            }
        }
    }
    return text;
}