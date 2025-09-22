#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cs50.h"
#include <ctype.h>

string cesar(string str, int key);
const int CHAR_SET_LEN = 26;

int main(void){
    string test = "ZzzzZZZzzZ2312";
    int key = 5;
    printf("%s\n", cesar(test, key));
    return 0;
}

string cesar(string str, int key)
{
    int len = strlen(str);
    string output = malloc(len + 1);
    int offset = key % 26;
    output[len] = '\0';
    for (int i = 0; i < len; i++){
        char ch = str[i];
        bool is_upper = false;
        if(!isalpha(ch)){
            output[i] = ch;
            continue;
        }
        if (ch>= 'A' && ch<='Z'){
            ch = tolower(ch);
            is_upper = true;
        }
        ch = (ch - 'a' + offset) % CHAR_SET_LEN + 'a';
        if (is_upper){
            ch = toupper(ch);
        }
        output[i] = ch;
    }
    return output;
}