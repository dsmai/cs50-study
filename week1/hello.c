#include <stdio.h>
#include <cs50.h>

/* 
bool
char
double
float
int
long
string
 */

int main(void)
{
    int num1;
    char letter;
    printf("What is your number and letter: ");
    scanf("%i %c", &num1, &letter);

    unsigned char a = 1;
    if (!a)
    {
        for (int i = 0; i < 3; i++)
        {
            printf("hello Miu Miu\n");
        }
    }

    else
    {
        printf("hello everyone!\n");
        printf("hello, your number and letter are %i and %c\n", num1, letter);
    }
}