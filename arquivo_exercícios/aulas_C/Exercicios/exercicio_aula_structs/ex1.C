#include<stdio.h>

typedef struct pessoa {
    char nome[100];
    int idade;
    char endereco[100];
}PESSOA;

int main (){
    PESSOA alguem;

    printf("digite o nome: \n");
    fgets(alguem.nome, sizeof(alguem.nome), stdin);

    printf("digite a idade: \n");
    scanf("%d", &alguem.idade);

    getchar();

    printf("digite seu endereço: \n");
    fgets(alguem.endereco, sizeof(alguem.endereco), stdin);
    //scanf("%s", &alguem.endereco);

    printf("\n%s", alguem.nome);
    printf("%d\n", alguem.idade);
    printf("%s\n", alguem.endereco);

    return 0;
}