#include <stdio.h>
#include "lista.h"

lista *criarlista()
{
    return NULL;
}
lista *inserirlista(lista*l,int v)
{
    lista *novo;
    novo=(lista*)malloc(sizeof(lista));
    novo->info=v;
    novo->prox=l;
    return novo;
}
void imprimirlista (lista *l)
{
    while (l!=NULL)
    {
        printf("%d\n",l->info);
        l=l->prox;
    }
}
