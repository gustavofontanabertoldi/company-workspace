
#include <stdio.h>
#include <stdlib.h>

//Trying to do a linked list by my own;

typedef struct st_node{
    int value;
    struct st_node *prox;
}NO;

int empty (NO *ll){
    if(ll->prox == NULL){
        return 1;
    }else{
        return 0;
    }
}

void clean (NO *ll){
    if(!empty(ll)){
        NO *current, *next_node;
        current = ll->prox;
        while (current != NULL) {
        next_node = current->prox;
        free(current);
        current = next_node;    
        }

    }else{
        printf("The list is empty\n");
    }
}

void initiate (NO *ll){
    ll->prox = NULL;
}

void show(NO *ll){
    if(empty(ll)){
        printf("The list is empty\n");
    }else{
        NO *current, *next_node;
        current = ll->prox;
        while(current -> prox != NULL){
            next_node = current->prox;
            printf("-%d-", current->value);
            current = next_node;
        }
    }
}

void start (NO *ll){
    NO *new = (NO*)malloc(sizeof(NO));

    if(!new){
        printf("not enougth memory");
    }else{
        printf("Which value you want to add? ");
        scanf("%d", &new->value);

        new->prox = ll->prox;
        ll->prox = new;
    }
}

void back (NO *ll){
    NO *new = (NO *)malloc(sizeof(NO));

    if(!new){
        printf("Not enougth memory");
    }else{
        printf("Which value you want to add? ");
        scanf("%d", &new->value);

        new->prox = NULL;
        NO *tmp = ll->prox;
        while(tmp->prox != NULL){
            tmp = tmp->prox;
        }
        tmp->prox = new;
    }
}

void del (NO *ll){
    if(empty(ll)){
        printf("the list is empty\n");
    }else{
        int opc;
        printf("which node you want to delete?\n");
        printf("[1] - Last\n");
        printf("[2] - First\n");
        scanf("%d", &opc);

        switch (opc)
        {
        case 1:
            NO *tmp = ll->prox;
            NO *prev = NULL;
            while(tmp->prox != NULL){
                prev = tmp;
                tmp = tmp->prox;
            }

            if (prev != NULL) {
                prev->prox = NULL; 
            } else {
                ll->prox = NULL;
            }
            free(tmp);
            break;
        
        case 2:
            if (ll->prox != NULL) {
                NO *next, *last;
                last = ll->prox;
                next = last->prox;
                free(last);
                ll->prox = next;
            }else{
                printf("the list is empty\n");
            }
            break;

        default:
            break;
        }
    }
}

int menu(){
    int op;
        printf("[0] - Exit\n");
        printf("[1] - Add to the beggining\n");
        printf("[2] - Add to the end\n");
        printf("[3] - Show the list\n");
        printf("[4] - Initiate\n");
        printf("[5] - Delete\n");
        printf("Option: ");
        scanf("%d", &op);
    return op;
}

void option (NO *ll, int op){

    switch (op)
        {
        case 0:
            clean(ll);
            break;
        
        case 1:
            start(ll);
            break;

        case 2: 
            back(ll);
            break;

        case 3:
            show(ll);
            break;

        case 4:
            initiate(ll);
            break;
        
        case 5:
            del(ll);
            break;
        
        default:
            printf("Opção inválida");
            break;;
        }
}

int main (){
    NO *ll;
    initiate(ll);

    int op;
    do {
        op = menu();
        option(ll, op);
    } while (op != 0);

    return 0;
}