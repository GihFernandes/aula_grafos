#ifndef GRAFO_H_INCLUDED //se não definido, faça:
#define GRAFO_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

//Definições gerais
#define TRUE 1
#define FALSE 0
#define PESO_DEFAULT 1

//Codigos de Retorno
#define OP_OK 0
#define ERR_VERTICE_INVALIDO -1

//Estrutura do Grafo
typedef struct s_edge {
    int peso;         //Peso da aresta
    int vert_dst;      //Vertice Destino
    struct s_edge *prox;
} Aresta;

typedef struct s_vertex {
    int index;
    char nome[128];
    Aresta *lista_adj; //Lista de Adjacencia
} Vertice;

typedef struct s_graph {
    int num_vert;
    int num_aresta;
    int digrafo; //TRUE OR FALSE
    Vertice *vertices;
} Grafo;

//Definição das Operações
//Cria um grafo, ou um digrafo, com o numero de vertices definido
Grafo* criar_grafo(int num_vert, int digrafo);
//E vertices nomeados
Grafo* criar_grafo_nomes(int num_vert, int digrafo, char *nomes[]);

//Criar arestas
int criar_aresta(Grafo *g, int v_orig, int v_dest);
int criar_aresta_peso(Grafo *g, int v_orig, int v_dest, int peso);

// Remove Aresta
int remover_aresta(Grafo *g, int v_orig, int v_dest);


#endif // GRAFO_H_INCLUDED
