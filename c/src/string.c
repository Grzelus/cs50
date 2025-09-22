#include <stdio.h>
#include "cs50.h"
#include <string.h>

int string_length(string word);

int main(void)
{
    string word = get_string(": ");
    int len = string_length(word);
    printf("%i", len);
}

int string_length(string word)
{
    int number = 0;
    while (word[number] != '\0')
    {
        number++;
    }
    return number;
}