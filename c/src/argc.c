#include <stdio.h>
#include "cs50.h"

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        printf("hello, %s", argv[1]);
        return 0;
    }
    else
    {
        printf("enter 1 argument");
        return 1;
    }
}