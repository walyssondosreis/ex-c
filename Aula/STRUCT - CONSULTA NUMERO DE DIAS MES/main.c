#include <stdio.h>
#include <stdlib.h>
#include <string.h>



struct mes
{
    char nomem[11],brevm[4];
    int dias,mesn;
};
struct mes mes[12];
int calculototaldias(int num)
{
    int j,soma=0;
    for(j=0;j<num;j++)
    {
        soma+=mes[j].dias;
    }
    return soma;
}

int main()
{
    int numerod;

    strcpy(mes[0].nomem,"JANEIRO");
    strcpy(mes[0].brevm,"JAN");
    mes[0].dias=31;
    mes[0].mesn=1;

    strcpy(mes[1].nomem,"FEVEREIRO");
    strcpy(mes[1].brevm,"FEV");
    mes[1].dias=28;
    mes[1].mesn=2;

    strcpy(mes[2].nomem,"MARCO");
    strcpy(mes[2].brevm,"MAR");
    mes[2].dias=31;
    mes[2].mesn=3;

    strcpy(mes[3].nomem,"ABRIL");
    strcpy(mes[3].brevm,"ABR");
    mes[3].dias=30;
    mes[3].mesn=4;

    strcpy(mes[4].nomem,"MAIO");
    strcpy(mes[4].brevm,"MAI");
    mes[4].dias=31;
    mes[4].mesn=5;

    strcpy(mes[5].nomem,"JUNHO");
    strcpy(mes[5].brevm,"JUN");
    mes[5].dias=30;
    mes[5].mesn=6;

    strcpy(mes[6].nomem,"JULHO");
    strcpy(mes[6].brevm,"JUL");
    mes[6].dias=31;
    mes[6].mesn=7;

    strcpy(mes[7].nomem,"AGOSTO");
    strcpy(mes[7].brevm,"AGO");
    mes[7].dias=31;
    mes[7].mesn=8;

    strcpy(mes[8].nomem,"SETEMBRO");
    strcpy(mes[8].brevm,"SET");
    mes[8].dias=30;
    mes[8].mesn=9;

    strcpy(mes[9].nomem,"OUTUBRO");
    strcpy(mes[9].brevm,"OUT");
    mes[9].dias=31;
    mes[9].mesn=10;

    strcpy(mes[10].nomem,"NOVEMBRO");
    strcpy(mes[10].brevm,"NOV");
    mes[10].dias=30;
    mes[10].mesn=11;

    strcpy(mes[11].nomem,"DEZEMBRO");
    strcpy(mes[11].brevm,"DEZ");
    mes[11].dias=31;
    mes[11].mesn=12;

    printf("\n DIGITE O NUMERO DO MES: ");
    scanf("%d",&numerod);
    printf("\n TOTAL DE DIAS : %d",calculototaldias(numerod));
    return 0;
}
