#include<stdio.h>
#include<stdlib.h>

void select_sort(int vetor[], int tam){
    int menor, troca;

    for (int i = 0; i < (tam - 1); i++){
        menor = i;

        for(int j = (i+1); j < tam; j++){
            if (vetor[j] < vetor[menor]){
                menor = j;
            }
        }

        if (i != menor){
            troca = vetor [i];
            vetor[i] = vetor[menor];
            vetor[menor] = troca;
        }
    }
}

int main (){
    int array [6] = {1, 8, 5, 3, 9, 2};

    select_sort(array, 6);

    for (int i = 0; i < 6; i++){
        printf("-%d-", array[i]);
    }

    return 0;
}