#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "lista.h"
int main()
{
    int a;
    lista *p;
    p=criarlista();/*
    p=inserirlista(p,100);
    p=inserirlista(p,144);
    p=inserirlista(p,188);
    p=inserirlista(p,200);
    imprimirlista(p);*/

    printf("\nDIGITE UM ELEMENTO PARA LISTA: \n");
    while (1)
    {
        scanf("%d",&a);
        if (a==0) break;
        p=inserirlista(p,a);
    }
    printf("\n\nSUA LISTA DE DADOS FOI A SEGUINTE: ");
    imprimirlista(p);
    return 0;
}
