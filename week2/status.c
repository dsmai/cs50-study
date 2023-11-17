#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    if (argc != 3)
    {
        printf("Hey, there is an error, please enter again.\n");
        return 1;
    }
    else
    {
        printf("Hello %s %s\n", argv[1], argv[2]);
        return 0;
    }
}