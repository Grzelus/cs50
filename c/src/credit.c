#include "cs50.h"
#include <stdio.h>
#include <string.h>

int check_legit(long number);

int main(void)
{
    long long number = get_long_long(": ");

    bool result = check_legit(number);

    if (result){
        char str_number[20] = "";
        sprintf(str_number, "%lli", number);

        int lenght = strlen(str_number);

        if (str_number[0] == '3' && lenght == 15 && (str_number[1] == '4' || str_number[1]=='7')){
            printf("AMEX\n");
        }
        else if (str_number[0]=='5' && lenght == 16 && (str_number[1] == '1' || str_number[1] == '2' || str_number[1] == '3' || str_number[1] == '4' || str_number[1] == '5'))
        {
            printf("MASTERCARD\n");
        }
        else if (str_number[0] == '4' && (lenght == 13 || lenght == 16)){
            printf("VISA\n");
        }
        else {
            printf("INVALID\n");
        }
    }

    return 0;
}

int check_legit(long number)
{
    char digit_stirng[20] = "";
    char buffer[3];
    int sum_remaining_digits = 0;

    while (number > 0)
    {
        int reminder = number % 100;
        int digit = reminder / 10;
        int remaining_digit = reminder % 10;
        sum_remaining_digits += remaining_digit;
        digit *= 2;
        number /= 100;

        sprintf(buffer, "%i", digit);
        strcat(digit_stirng, buffer);
    }

    int sum = 0;

    for (int i = 0; i < strlen(digit_stirng); i++)
    {
        int digit = (int)digit_stirng[i];
        sum += digit - '0';
    }

    int final_value = sum + sum_remaining_digits;

    if (final_value % 10 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}