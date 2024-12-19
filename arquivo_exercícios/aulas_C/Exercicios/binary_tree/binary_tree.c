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

void exclude (TREE **t, int num){
    TREE *atual, *prox = NULL;
    atual = (*t);
    while(atual != NULL && atual->value != num){//loop to find the number
        prox = atual;    
        if(num > atual->value){    //verify if the num is higher than the current
            if(atual->rt != NULL){
                atual = atual->rt;
            }
        }else if(num < atual->value){  //verify if the num is lower than the current
            if(atual->lt != NULL){
                atual = atual->lt;
            }
        }
    }
    
}

int main (){


    return 0;
}
