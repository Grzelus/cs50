#include <stdio.h>
#include <cs50.h>

float average(int N, int numbers[]);
const int N = 3;

int main(void)
{
    int numbers[N];

    for (int i = 0; i < N; i++){
        numbers[i] = get_int("Input %i value: ", i+1);
    }
    printf("%.3f\n", average(N, numbers));
}

float average(int N, int numbers[])
{
    int sum = 0;

    for (int i = 0; i < N; i++)
    {
        sum += numbers[i];
    }

    return (sum / (float) N);
}