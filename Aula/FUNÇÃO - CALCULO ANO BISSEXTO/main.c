#include <stdio.h>
#include <stdlib.h>

int calculaanobi(int anod)
{
    if((anod%4==0)&&(anod%100!=0)||(anod%400==0)) return 1;
    else return 0;
}
int main()
{
    int ano;
    printf("DIGITE O NUMERO DE DIAS DO ANO:");
    scanf("%d",&ano);
  printf("\nBISSEXTO ?  [   %d   ]\n",calculaanobi(ano));
    return 0;
}
