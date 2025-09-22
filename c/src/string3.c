#include <stdio.h>
#include "cs50.h"

int main(void){
    int n = get_int(": ");
    string words[n];
    for (int i = 0; i < n; i++){
        words[i] = get_string("%i", i);
    }
    printf("%i %i %i %i", words[0][0],words[0][1],words[0][2],words[0][3]);
    return 0;
}