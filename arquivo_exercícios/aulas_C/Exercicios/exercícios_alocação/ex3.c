#include<stdio.h>
#include<stdlib.h>

int main(){

    int qtd, *p;

    printf("digite a quantidade de elementos que o arra vai ter: ");
    scanf("%i", &qtd);

    p = (int *)calloc(qtd, sizeof(int));

    if(p){

        printf("digite a nova quantidade de elementos: ");
        scanf("%i", &qtd);

        p = (int *)realloc(p, qtd * sizeof(int));

        for(int i = 0; i < qtd; i++){
            printf("digite os valores: ");
            scanf("%i", &p[i]);
        }

        for(int i = 0; i < qtd; i++){
            printf("valor em [%i]: %i\n", i, p[i]);
        }

        free(p);
        p == NULL;
    }else{
        printf("erro: out of memory");
    }

    return 0;
}