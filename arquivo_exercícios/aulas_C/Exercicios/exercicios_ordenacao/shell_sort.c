#include<stdio.h>
#include<stdlib.h>

void shell_sort (int array[]; int tam){
    int grupo = 1;

    while(grupo < tam){
        grupo = 3 * grupo + 1;
    }

    while(grupo > 1){
        grupo/=3;

        for(int i = grupo; i < tam; i++){
            int troca = array[i];
            int j = i - grupo;
            while (j >= 0 && troca < array[j]){
                array[j + grupo] = array[j];
                j-=grupo;
            }
            array[j + grupo] = troca;
        }
    }
}

int main (){
    int array [6] = {1, 8, 5, 3, 9, 2};

    shell_sort(array, 6);

    for (int i = 0; i < 6; i++){
        printf("-%d-", array[i]);
    }

    return 0;
}