#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

typedef struct lista   //DEFINE UM TIPO DE DADOS : LISTA
{
    int dado;
    struct lista *prox;

} lista;

lista *crialista();
lista *inseririnilista(lista *l,int v);
lista *excluirlista(lista* l);
lista *buscalista(lista* l);
void imprimelista(lista *l);



#endif // LISTA_H_INCLUDED
