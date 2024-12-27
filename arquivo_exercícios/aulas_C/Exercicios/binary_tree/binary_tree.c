#include <stdio.h>
#include <stdlib.h>

typedef struct st_tree{

    int value;
    struct st_tree *lt;
    struct st_tree *rt;
}TREE;

TREE* create (){
    return NULL;
}

int empty (TREE *t){
    return t == NULL;
}

void show (TREE *t){
    printf("<");
    if(!empty){
        printf("%d ", t->value);
        show(t->lt);
        show(t->rt);
        printf(">");
    }
}

void add (TREE **t, int num){
    if(*t == NULL){
        *t = (TREE *)malloc(sizeof(TREE));

        (*t)->lt = NULL;
        (*t)->rt = NULL;
        (*t)->value = num;
    }else{
        if(num > (*t)->value){
            add(&(*t)->rt, num);
        }else if(num < (*t)->value){
            add(&(*t)->lt, num);
        }else{
            printf("Not permited equal values numbers");
        }
    }
}

void del (TREE **t, int num){
    if(!empty){
        int n;
        printf("which number you want to exclude? ");
        scanf("%d", &n);
        exclude((*t), n);
    }else{
        printf("The tree is empty");
    }
}

void exclude(TREE **t, int num) {
    TREE *atual = *t, *prox = NULL;

    // Localizar o nó a ser excluído
    while (atual != NULL && atual->value != num) {
        prox = atual;
        if (num > atual->value) {
            atual = atual->rt;
        } else {
            atual = atual->lt;
        }
    }

    // Se o nó não foi encontrado
    if (atual == NULL) {
        printf("Número não encontrado na árvore.\n");
        return;
    }

    // Caso 1: Nó folha
    if (atual->lt == NULL && atual->rt == NULL) {
        if (prox == NULL) { // Nó raiz
            *t = NULL;
        } else if (prox->lt == atual) {
            prox->lt = NULL;
        } else {
            prox->rt = NULL;
        }
    }
    // Caso 2: Um único filho
    else if (atual->lt == NULL || atual->rt == NULL) {
        TREE *filho = (atual->lt != NULL) ? atual->lt : atual->rt;
        if (prox == NULL) { // Nó raiz
            *t = filho;
        } else if (prox->lt == atual) {
            prox->lt = filho;
        } else {
            prox->rt = filho;
        }
    }
    // Caso 3: Dois filhos
    else {
        TREE *substituto = atual->rt, *paiSubstituto = atual;
        while (substituto->lt != NULL) {
            paiSubstituto = substituto;
            substituto = substituto->lt;
        }

        atual->value = substituto->value; // Substituir valor
        if (paiSubstituto->lt == substituto) {
            paiSubstituto->lt = substituto->rt;
        } else {
            paiSubstituto->rt = substituto->rt;
        }
        atual = substituto; // Para liberar o nó substituído
    }

    free(atual);
}


int main (){
    TREE *t = create();

    add(&t, 12);
    add(&t, 15);
    add(&t, 1);
    add(&t, 7);
    add(&t, 20);

    show(t);
    if(empty(t)){
        printf("The tree is empty");
    }

    free(t);
    return 0;
}
