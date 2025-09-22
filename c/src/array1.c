#include <stdio.h>
#include "cs50.h"

const int ARRAY_SIZE = 5;

int main(void)
{
    int array[ARRAY_SIZE];
    array[0] = 1;
    for (int i = 1; i < ARRAY_SIZE; i++)
    {
        array[i] = array[i - 1] * 2;
    }
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        printf("%i\n", array[i]);
    }
    return 0;
}