#include<stdio.h>
#include<stdlib.h>

void cria_heap(int array[], int inicio, int fim){
    int pai = array[inicio];
    int filho = inicio * 2 + 1;

    while(filho <= fim){
        if(filho < fim){
            if(array[filho] < array[filho + 1]){
                filho = filho + 1;
            }
        }
    }
    if(pai < array[filho]){
        array[inicio] = array[filho];
        inicio = filho;
        filho = 2 * inicio + 1;
    }else{
        filho = fim + 1;
    }
    array[inicio] = pai;
}

void heap_sort(array[], int tam){
    int troca;
    int meio = (tam -1) / 2;

    for(int i = meio; i>= 0; i--){
        cria_heap(array, i, tam - 1);    
    }

    for(int i = tam-1; i >= 1; i--){
        troca = array[0];
        array[0] = array[i];
        vetor[i] = troca;

        cria_heap(array, 0, i - 1);
    }
}
int main (){
    int array [6] = {1, 8, 5, 3, 9, 2};

    heap_sort(array, 6);

    for (int i = 0; i < 6; i++){
        printf("-%d-", array[i]);
    }

    return 0;
}