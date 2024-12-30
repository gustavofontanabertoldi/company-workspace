#include<stdio.h>
#include<stdlib.h>

void insert_sort(int vetor, int tam){
    int troca;

    for (int i = 1; i < tam; i++) {
        int prox = i;

        while (prox != 0 && vetor[prox] < vetor[prox - 1]) {
            int troca = vetor[prox];
            vetor[prox] = vetor[prox - 1];
            vetor[prox - 1] = troca;
            prox--;
        }
    }
}

int main (){
    int array [6] = {1, 8, 5, 3, 9, 2};

    insert_sort(array, 6);

    for (int i = 0; i < 6; i++){
        printf("-%d-", array[i]);
    }

    return 0;
}