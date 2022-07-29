#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

typedef struct lista
{
    int info;
    struct lista *prox;
} lista;

lista *criarlista();
lista *inserirlista(lista *l, int v); //ok
lista *retirarlista(lista *l, int v);
void imprimirlista (lista *l); // ok
lista *buscarlista(lista *l, int v);


#endif // LISTA_H_INCLUDED
