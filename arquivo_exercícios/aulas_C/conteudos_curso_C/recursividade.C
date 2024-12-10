/*
    CONTEÚDO SOBRE RECURSIVIDADE

    ##Aqui uso como bloco de notas para anotar conceitos e exemplos##
*/

// -> Recursividade é o ato de uma função chamar a si mesma <-

// -> Uma função recursiva precisa de uma condição de parada <-

/*
exemplo de uma função recursiva é a sequencia de fibonacci
onde a função repete várias vezes, até ser parada por uma estrutura condcional
*/

// EXEMPLO ABAIXO (APENAS RETIRAR DO PARÊNTESES PARA TESTAR)

/*
#include <stdio.h>

int fib (int n){
    if(n == 0){
        return 0;
    }
    if (n == 1){
        return 1;
    }
    return fib(n-1) + fib (n - 2);
}

int main (){
    int num;
    printf("Digite quantas sequências deseja ver: ");
    scanf("%i", &num);

    for(int i = 0; i < num; i++){
        printf("%d ", fib(i+1));
    }
}
*/


