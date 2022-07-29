#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "lista.h"

int main()
{
    int *p,*u,x,v;
    p=crialista();
    while(1)
    {
        system("cls");
        printf("\nLISTA ENCADEADA\n\nDIGITE:\n1-INSERIR NO INICIO DA LISTA\n2-EXCLUIR ELEMENTO DA LISTA\n3-IMPRIMIR\n4-PESQUISAR\n0-SAIR\n\n");
        scanf("%d",&x);
        switch (x)
        {
        case 0:
            system("cls");
            return 0;
        case 1:
            system("cls");
            printf("\nDIGITE O VALOR INTEIRO A INSERIR: ");
            scanf("%d",&v);
            p=inseririnilista(p,v);
            break;
        case 2:
            system("cls");
            p=excluirlista(p);
            break;
        case 3:
            system("cls");
            imprimelista(p);
            getch();
            break;
        case 4:
            system("cls");
            u=buscalista(p);
            printf("\nRETORNO DE BUSCA: %d",u);
            getch();
            break;
        default:
            printf("\nOPCAO INVALIDA!");
        }
    }
    return 0;
}
