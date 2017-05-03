#define VERBOSE

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#include "leergml.h"

RED red;
int twom;                // Va a ser el doble del número de aristas
                         // lo queremos para muchas cosas.
double p;                   
int **m;                 // El conteo de las aristas.



int main(int argc, char *argv[])
{
    int u;

    #ifdef VERBOSE
        fprintf(stderr,"Leyendo la red...\n");
    #endif
    leer_red(&red,stdin);
    for (u=twom=0; u<red.nnodos; u++) twom += red.nodo[u].grado;
    p = (double)twom/(red.nnodos*red.nnodos);
    #ifdef VERBOSE
    fprintf(stderr,"Red con %i nodos y %i aristas\n",
	  red.nnodos,twom/2);
    #endif
    #ifdef VERBOSE
        fprintf(stderr,"\n");
    #endif
}
