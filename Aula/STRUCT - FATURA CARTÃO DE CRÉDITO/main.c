#include <stdio.h>
#include <stdlib.h>
#define C 2

typedef struct cartao
{
    char data[20];
    char descricao[30];
    int nparcela;
    int tparcela;
    float valor;
} cartao;

cartao inputdata()
{
    cartao master;
    printf("\nDIGITE A DATA DA COMPRA: ");
    scanf("%s",master.data);
    fflush(stdin);
    printf("\nDIGITE A DESCRICAO DA COMPRA: ");
    scanf("%s",master.descricao);
    fflush(stdin);
    printf("\nDIGITE O NUMERO DA PARCELA: ");
    scanf("%d",&master.nparcela);
    printf("\nDIGITE O TOTAL DE PARCELAS: ");
    scanf("%d",&master.tparcela);
    printf("\nDIGITE O VALOR DA COMPRA/PARCELA: ");
    scanf("%f",&master.valor);
    return master;
}
float calctotalpen(cartao master2)
{
    return (master2.tparcela-master2.nparcela)*master2.valor;
}
int main()
{
    int j;
    float totalp=0;
    cartao masterM[C];
  /*  cartao master1;
    printf("\n\nFATURA DO CARTAO________\n\n");
    master1=inputdata();
    printf("\n\nVALOR TOTAL PENDENTE: R$%.2f",calctotalpen(master1)); */

    for (j=0;j<C;j++)
    {
        printf("\n\nDIGITE %d A COMPRA ___:\n\n ",j+1);
        masterM[j]=inputdata();
    }
    for (j=0;j<C;j++)
    {
        totalp+=calctotalpen(masterM[C]);
    }
    printf("\n\nTOTAL DE PARCELAS PENDENTES : %.2f\n\n",totalp);
    return 0;
}
