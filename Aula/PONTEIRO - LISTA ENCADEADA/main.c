#include <stdio.h>
#include <stdlib.h>

typedef struct lista
{
 int info;
 struct lista *prox; // cria ponteiro para proxima lista de mesmo tipo
}lista; // define um tipo de struct chamado lista

lista *inserir(lista *p,int v) // função que retorna um poteiro apos inserir valor em inicio
{
    lista *novo; // define ponteiro do tipo struct lista chamado novo
    novo=(lista*)malloc(sizeof(lista)); // define tipo novo como ponteiro de lista e aloca memoria do tamanho de um tipo lista
    novo->info=v; // atribui valor v para variável info  dentro de novo
    novo->prox=p; // atribui endereço de p para variável prox dentro de novo
    return novo; // retorna um ponteiro que aponta para uma struct
}
void imprimir (lista *p)
{
    while(p!=NULL)
    {
        printf("%d\n",p->info);
        p=p->prox;
    }
}


int main()
{
    lista *p=NULL;
    p=inserir(p,50);
    p=inserir(p,100);
    p=inserir(p,200);

    imprimir(p);

    return 0;
}
