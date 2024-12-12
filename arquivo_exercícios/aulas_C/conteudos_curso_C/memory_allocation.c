#include <stdio.h>
#include <stdlib.h>


    malloc();
/*
    -> Quando não temos certeza do tamanho de um array, ele podendo ter de 0..n
    elementos, usamos a alocação de memória.
    Ex:
        int qtd, *p;

        printf("digite quantos elementos esse array vai ter: ");
        scanf("%i", &qtd);

        p = (int*) malloc(qtd * sizeof(int));

        // 'P' vai receber um ponteiro do tipo int, alocando um espaço na memória
            do tamanho da quantidade x o valor de um inteiro. (meio que o ponteiro vira o array, pois ele aloca exaatamente o espaço necessário)
            (a função malloc retorna um ponteiro para um tipo)
    
    -> Depois do término do programa, o espaço da memória continua alocado
       então para liberar o espaço, basta usar a função:

       free(nome_do_ponteiro);
       nome_ponteiro = NULL;

    ---------------------------------------------------------------------
        
*/

    calloc();
/*
    -> É basicamente um malloc que limpa os espaços alocados antes de usar.

    -> passa dois parâmetros para usar, uma quantidade de elmentos e o tamanho do tipo.

        p = (int *)calloc(qtd, sizeof(int));

*/

    realloc();
/*
    -> Realoca na memória a partir de um espaço já alocado

        p = (int *)realloc(p, qtd * sizeof(int));

*/

// ALOCAÇÃO DE ARRAY MULTIDIMENCIONAIS

/*
    ->

*/
