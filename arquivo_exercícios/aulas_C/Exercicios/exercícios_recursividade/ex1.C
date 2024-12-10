#include<stdio.h>

int soma (int n){
    if(n == 0){
        return 0;
    }

    return n + soma(n-1);

}

int main(){

    int num;

    printf("digite um numero qulquer para fazer a soma de 1 até n: ");
    scanf("%i", &num);

    printf(" %i ", soma(num));
   
    return 0;
}