#include <stdio.h>
#include <string.h>
#include "cs50.h"

int main(void)
{
    string name;

    while (true)
    {
        name = get_string("What is your name: ");

        if (name != NULL && strlen(name) > 0)
        {
            break;
        }
    }

    printf("Hello, %s", name);
    return 0;
}