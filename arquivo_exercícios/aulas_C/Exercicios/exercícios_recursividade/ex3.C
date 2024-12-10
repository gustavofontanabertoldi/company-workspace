#include <stdio.h>

void binario (int n){
    if (n > 0){
        binario(n / 2);
        printf("%i", n % 2);
        //binario(n / 2);
    }
}

int main(){
    int n;

    printf("digite um numero para saber qual é seu binario: ");
    scanf("%i", &n);

    binario(n);
}