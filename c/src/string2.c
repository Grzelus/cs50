#include <stdio.h>
#include "cs50.h"
#include <string.h>

int main(void)
{
    string word = get_string(": ");

    for (int i = 0, len = strlen(word); i < len; i++)
    {
        if (word[i] >= 'a' && word[i] <= 'z')
        {
            printf("%c", word[i] - 32);
        }
        else
        {
            printf("%c", word[i]);
        }
    }
    printf("\n");
}