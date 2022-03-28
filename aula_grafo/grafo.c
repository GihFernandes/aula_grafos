#include "Grafo.h"

//**** Funções Internas ****


//**** Funções Públicas ****
//Definição das Operações
//Cria um grafo, ou um digrafo, com o numero de vertices definido
Grafo* criar_grafo(int num_vert, int digrafo)
{
    if (num_vert <=0) return NULL;
    Grafo *g = (Grafo*)malloc(sizeof(Grafo));
    g->num_vert = num_vert;
    g->num_aresta = 0;
    g->digrafo =(digrafo == FALSE)? FALSE : TRUE;

    g->vertices = (Vertice*)calloc(num_vert, sizeof(Vertice));

    int i;
    for(i = 0; i < num_vert; i++){
        g->vertices[i].index = i;
        g->vertices[i].lista_adj = NULL;
    }

    return g;
}
//E vertices nomeados
Grafo* criar_grafo_nomes(int num_vert, int digrafo, char *nomes[])
{
    return NULL;
}

//Criar arestas
int criar_aresta(Grafo *g, int v_orig, int v_dest)
{
    return OP_OK;
}
int criar_aresta_peso(Grafo *g, int v_orig, int v_dest, int peso)
{
    return OP_OK;
}

// Remove Aresta
int remover_aresta(Grafo *g, int v_orig, int v_dest)
{
    return OP_OK;
}
