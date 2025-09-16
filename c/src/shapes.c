#include <stdio.h>

void print_piramid(int n);
void print_rectangle(int a, int b);

int main(void){
    print_piramid(10);
    print_rectangle(3,-1);
    return 0;
}

void print_piramid(int n){
    for (int i = 1; i<=n; i++){
        for (int k =0; k<=n-i; k++){
            printf(" ");
        }
        for (int j = 1; j<i*2; j++){
            printf("#");
        }
        printf("\n");
    }
}

void print_rectangle(int a, int b){
    if (b == -1){
       b = a;
}
  
    for (int i = 0; i < b; i++){
        for (int j = 0; j < a; j++){
            printf("#");
        }
        printf("\n");
    }
}