#include <stdio.h>

int fatorial (int n){
    if (n != 0){
        return n * fatorial (n - 1);
    }
    return 1;
}

int main (){

    int num;

    printf("digite um numero para saber seu fatorial");
    scanf("%i", &num);

    printf(" %i ", fatorial(num));
}