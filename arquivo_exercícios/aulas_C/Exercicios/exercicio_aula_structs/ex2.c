#include<stdio.h>
#include<string.h>

typedef struct aluno {
    char nome[100];
    int num_mat;
    char curso[100];
} ALUNOS;

int main() {
    ALUNOS pessoas[5];

    for (int i = 0; i < 5; i++) {
        printf("Digite o nome do aluno %d: \n", i + 1);
        fgets(pessoas[i].nome, sizeof(pessoas[i].nome), stdin);
        pessoas[i].nome[strcspn(pessoas[i].nome, "\n")] = '\0';

        printf("Digite o número da matrícula: ");
        scanf("%i", &pessoas[i].num_mat);

        getchar();

        printf("Digite o curso do aluno %d: ", i + 1);
        fgets(pessoas[i].curso, sizeof(pessoas[i].curso), stdin);
        pessoas[i].curso[strcspn(pessoas[i].curso, "\n")] = '\0';
    }

    printf("\n--- Dados dos Alunos ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Matrícula: %d\n", pessoas[i].num_mat);
        printf("Curso: %s\n\n", pessoas[i].curso);
    }

    return 0;
}
