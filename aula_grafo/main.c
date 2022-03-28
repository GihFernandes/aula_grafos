#include <stdio.h>
#include <stdlib.h>
#include "grafo.h"
int main()
{
    Grafo *g = criar_grafo(2, FALSE);
    if (g == NULL){
         printf("Grafo não definido\n");
    }
    else{
        printf("Numero de vertices %d\n", g->num_vert);
        printf("Indice dos vertices\n");
    }

    int i;
    for(i = 0; i < g->num_vert; i++) {
        printf("\t%d\n", g->vertices[i].index);
    }


    return 0;
}
