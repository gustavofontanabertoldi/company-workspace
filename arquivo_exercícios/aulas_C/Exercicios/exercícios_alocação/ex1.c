#include <stdio.h>
#include <stdlib.h>

int main(void){

    int qtd, *p;

    printf("digite a quantidade de elementos que deseja: ");
    scanf("%i", &qtd);

    p = (int *)malloc(qtd * sizeof(int));

    for(int i = 0; i < qtd; i++){
        printf("digite um numero para ser guardado: ");
        scanf("%i", &p[i]);
    }

    for(int i = 0; i < qtd; i++){
        printf("numero na posição[%i]: %i\n",i , p[i]);
    }

    printf("tamanho do array do ponteiro P: %ld", qtd * sizeof(int));

    free(p);
    p == NULL;



    return 0;
}