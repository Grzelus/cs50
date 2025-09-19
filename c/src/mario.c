#include <stdio.h>
#include "cs50.h"

int main(void)
{
    int n;

    while (true)
    {
        n = get_int("How tall your tower supposed to be: ");

        if (n > 0 && n < 9)
        {
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }
        printf(" ");
        for (int l = 0; l <= i; l++)
        {
            printf("#");
        }
        printf("\n");
    }
}