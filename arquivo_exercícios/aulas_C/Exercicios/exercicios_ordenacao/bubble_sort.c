#include<stdio.h>
#include<stdlib.h>

void bubble_sort (int array, int tam){
    int prox = 0;

    for (int i = 0; i < tam; i++){
        for(int j = 0; j < (tam - 1); j++){
            if(vetor[j] > vetor[j + 1]){
                prox = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = prox;
            }
        }
    }
}

int main (){
    int array [6] = {1, 8, 5, 3, 9, 2};

    bubble_sort(array, 6);

    for (int i = 0; i < 6; i++){
        printf("-%d-", array[i]);
    }

    return 0;
}