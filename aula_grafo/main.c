#include <stdio.h>
#include <stdlib.h>
#include "grafo.h"
int main()
{
    Grafo *g = criar_grafo(5, FALSE);
    if (g == NULL){
         printf("Grafo não definido\n");
    }
    else{
        printf("numero de vertices %d\n", g->num_vert);
        printf("indice dos vertices ");
    }
    for(i = 0; i < g->num_vert; i++) {
        printf("\t%d\n", g->vertices[i].index);
    }


    return 0;
}
