#include "cs50.h"
#include <stdio.h>
#include <string.h>

int legit_check(long number);

int main(void)
{
    long long number = get_long_long(": ");

    if (legit_check(number)){
        char number_str[20] = "";
        sprintf(number_str, "%lli", number); 
        int len = strlen(number_str);
        int first = number_str[0] - '0';
        int second = number_str[1] - '0';

        if (len == 15 && first == 3 && (second == 4 || second == 7)){
            printf("AMEX\n");
        }
        else if (len == 16 && first == 5 && (second > 0 && second < 6)){
            printf("MASTERCARD\n");
        }
        else if ((len == 13 || len == 16) && first == 4){
            printf("VISA\n");
        }
        else{
            printf("INVALID\n");
        }
    }
    else {
        printf("INVALID\n");
    }
}

int legit_check(long number){
    int sum = 0;
    bool even = false;

    while (number > 0)
    {
        int digit = number % 10;
        number /= 10;

        if (even)
        {
            digit *= 2;
            if (digit > 9)
            {
                sum += digit / 10;
                sum += digit % 10;
            }
            else
            {
                sum += digit;
            }
        }
        else
        {
            sum += digit;
        }
        even = !even;
    }
    if (sum % 10 == 0){
        return true;
    }
    return false;
}