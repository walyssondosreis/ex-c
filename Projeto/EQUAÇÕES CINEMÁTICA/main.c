//PROGRAMA: CINEMÁTICA
//ESCRITO POR: WALYSSON DOS REIS
//DATA DE CRIAÇÃO: 01/04/2015
//PROPOSITO: RESOLVER EQUAÇÕES

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int var,var2;
    float x,xo,v,t;
while(1)
{
    system ("cls");
    printf("\n\t\t\tCINEMATICA - WALYSSON DOS REIS\n\n\t\t\tBEM VINDO AO MODULO DE FISICA I :]\n\n");
    printf("\n\t1 - MOVIMENTO RETILINEO UNIFORME (MRU)\n\t2 - MOVIMENTO RETILINEO UNIFORMEMENTE VARIADO (MRUV)\n ");
    printf("\n\n POR FAVOR DIGITE COD DO MOVIMENTO A SER CALCULADO: ");
    scanf("%d",&var2);
    if (var2==0){break;}
    if (var2==1)
{
	while(1)
{
	system ("cls");
    printf("\n\t\t\tCINEMATICA - WALYSSON DOS REIS\n\n\t\t\t MOVIMENTO RETILINEO UNIFORME\n\n");
    printf("\n\t1 - X (POSICAO FINAL)\n\t2 - X%c(POSICAO INICIAL)\n\t3 - V (VELOCIDADE)\n\t4 - t(TEMPO)\n",248);
    printf("\n\n POR FAVOR DIGITE COD DO QUE PROCURA: ");
    scanf("%d",&var);
    if (var==0){break;}
    system("cls");

    if (var==1)
    {
        printf("\n\t\t\tCINEMATICA - WALYSSON DOS REIS\n\n\t\t\t MOVIMENTO RETILINEO UNIFORME\n\n\t\t\t\t\tPOSICAO FINAL\n\n");
        printf("\n\n\t\tEQUACAO: X=X%c+V.t",248);
        printf("\n\n\t\tDIGITE O VALOR DE X%c: ",248);
        scanf("%f",&xo);
        printf("\t\tDIGITE O VALOR DE V: ");
        scanf("%f",&v);
        printf("\t\tDIGITE O VALOR DE T: ");
        scanf("%f",&t);
        x=xo+(v*t);
        printf("\t\tA SUA POSICAO FINAL (X) SERA DE: %.2fm \n\n",x);
    }
    if (var==2)
    {
        printf("\n\t\t\tCINEMATICA - WALYSSON DOS REIS\n\n\t\t\t MOVIMENTO RETILINEO UNIFORME\n\n\t\t\t\t\tPOSICAO INICIAL\n\n");
        printf("\n\n\t\tEQUACAO: X%c=X-V.t",248);
        printf("\n\n\t\tDIGITE O VALOR DE X: ",248);
        scanf("%f",&x);
        printf("\t\tDIGITE O VALOR DE V: ");
        scanf("%f",&v);
        printf("\t\tDIGITE O VALOR DE T: ");
        scanf("%f",&t);
        xo=x-(v*t);
        printf("\t\tA SUA POSICAO INICIAL (X%c) SERA DE: %.2fm \n\n",248,xo);
    }
    if (var==3)
    {
        printf("\n\t\t\tCINEMATICA - WALYSSON DOS REIS\n\n\t\t\t MOVIMENTO RETILINEO UNIFORME\n\n\t\t\t\t\tVELOCIDADE\n\n");
        printf("\n\n\t\tEQUACAO: V=(X-X%c)/t",248);
        printf("\n\n\t\tDIGITE O VALOR DE X: ");
        scanf("%f",&x);
        printf("\t\tDIGITE O VALOR DE X%c: ",248);
        scanf("%f",&xo);
        printf("\t\tDIGITE O VALOR DE T: ");
        scanf("%f",&t);
        v=(x-xo)/t;
        printf("\t\tA SUA VELOCIDADE (V) SERA DE: %.2fm/s \n\n",v);
    }
    if (var==4)
    {
        printf("\n\t\t\tCINEMATICA - WALYSSON DOS REIS\n\n\t\t\t MOVIMENTO RETILINEO UNIFORME\n\n\t\t\t\t\tTEMPO\n\n");
        printf("\n\n\t\tEQUACAO: t=(X-X%c)/V",248);
        printf("\n\n\t\tDIGITE O VALOR DE X: ");
        scanf("%f",&x);
        printf("\t\tDIGITE O VALOR DE X%c: ",248);
        scanf("%f",&xo);
        printf("\t\tDIGITE O VALOR DE V: ");
        scanf("%f",&v);
        t=(x-xo)/v;
        printf("\t\tO SEU TEMPO (T) SERA DE: %.2fs\n\n",t);
    }
     getch();
}
}
    if (var2==2)
{    system ("cls");
     printf("AH MULEKE");
	 getch();
}
}

    return 0;
}
