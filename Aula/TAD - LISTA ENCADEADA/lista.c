#include <stdio.h>
#include "lista.h"

lista *crialista()   //FUN플O QUE INICIA LISTA
{
    return NULL;
}
lista *inseririnilista(lista *l,int v) // FUN플O QUE INSERE DADOS NO INICIO DA LISTA
{
    lista *novo;
    novo=(lista*)malloc(sizeof(lista));
    novo->dado=v;
    novo->prox=l;
    return novo;
}
/*lista *inserirfimlista(lista *l,int v) // FUN플O QUE INSERE DADOS NO FIM DA LISTA
{
    lista *novo;
    novo=(lista*)malloc(sizeof(lista));
    novo->dado=v;
    while(1)
    {
        if (l==NULL)
        {
            l->prox=novo;
            novo->prox=NULL;
            break;
        }
        l=l->prox;
    }

    return novo;
}*/

lista *excluirlista(lista* l) // FUN플O QUE EXCLUI ELEMENTO DA LISTA
{
    int x;
    printf("\nQUAL ELEMENTO DESEJA EXCLUIR? ");
    imprimelista(l);
    scanf("%d",&x);
    while(1)
    {
        if (x==l->dado)
        {
            l=NULL;
            break;
        }
        l=l->prox;
    }
    return l;
}
lista *buscalista(lista* l) // FUN플O QUE BUSCA ELEMENTO NA LISTA
{
    int x,cont=1;
    printf("\nDIGITE O VALOR QUE PROCURA:");
    scanf("%d",&x);
    while(1)
    {
        if (l==NULL)
        {
         printf("\nVALOR NAO ENCONTRADO!");
         getch();
         return NULL;
        }
        if(l->dado==x)
        {
            printf("\nVALOR ENCONTRADO: %d\nO %d%c ELEMENTO DA LISTA",l->dado,cont,248);
            getch();
            return l;
        }
        l=l->prox;
        cont++;
    }
}
void imprimelista(lista *l)  // FUN플O QUE IMPRIME LISTA
{
    while(l!=NULL)
    {
        printf(" (%d) ",l->dado);
        l=l->prox;
    }
}
