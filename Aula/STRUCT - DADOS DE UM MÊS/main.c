#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
struct mes
{
    char nomem[11],brevm[4];
    int dias,mesn;
};

int main()
{
    struct mes mes1;
    printf("NOME DO M�S: ",setlocale(LC_ALL,""));
    scanf("%s",mes1.nomem);
    printf("ABREVIATURA DO M�S: ",setlocale(LC_ALL,""));
    scanf("%s",mes1.brevm);
    printf("N�MERO DE DIAS: ",setlocale(LC_ALL,""));
    scanf("%d",&mes1.dias);
    printf("N�MERO DO M�S: ",setlocale(LC_ALL,""));
    scanf("%d",&mes1.mesn);
    system("cls");
    printf("\nNOME: %s\n",mes1.nomem);
    printf("ABRV: %s\n",mes1.brevm);
    printf("DIAS: %d\n",mes1.dias);
    printf("N�MERO: %d\n",mes1.mesn,setlocale(LC_ALL,""));

    return 0;
}
