#include <stdio.h>
#include <stdlib.h>
#define true 1
#define fase 0
typedef int bool;
typedef int TIPOPESO;

typedef struct adjacencia {
    int vertice; // vertice de destino
    TIPOPESO peso; // peso associado a aresta que leva ao vertice de destino
    struct adjacencia *prox; // O próximo elemento da lista de adjacencias
}ADJACENCIA;

typedef struct vertice {
    /* Dados armazenados vão aqui */
    ADJACENCIA *cab; //possui apenas a cabeça da lista de adjacencia (linha 16)
}VERTICE;

typedef struct grafo {
    int vertice; // numero de vertice total do grafo     /*Apesar de não ser nescessario guardar o numero de vertices  e arestas, o fazemos, pois caso quisermos*/
    int arestas; // numero de arestas totais do grafo   /*saber desta informação, teriamos que percorrer toda a estrutura. Parece melhor perder 8bits de memória salvando isto ;)*/
    VERTICE *adj; // Arranjo de vertices da estrutura (linha 22)
}GRAFO;

GRAFO *cria_grafo(int num_vertices) {
    // Alocar memória para a estrutura do grafo
    GRAFO *g = (GRAFO*) malloc(sizeof(GRAFO));
    if (g == NULL) {
        printf("Erro ao alocar memória para o grafo.\n");
        return NULL;
    }

    g->vertice = num_vertices; // Definir o número de vértices
    g->arestas = 0;           // Inicializar sem arestas

    // Alocar memória para o array de vértices
    g->adj = (VERTICE*) malloc(num_vertices * sizeof(VERTICE));
    if (g->adj == NULL) {
        printf("Erro ao alocar memória para os vértices.\n");
        free(g); // Liberar o grafo antes de retornar
        return NULL;
    }

    // Inicializar as listas de adjacências de cada vértice
    for (int i = 0; i < num_vertices; i++) {
        g->adj[i].cab = NULL; // Nenhuma aresta inicial
    }

    return g; // Retornar o grafo criado
}

int main()
{
    return 0;
}