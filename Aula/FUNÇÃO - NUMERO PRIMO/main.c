#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int primo (int n)
{
    int stop;
    stop=n/2;
   while (stop!=1)
   {
       if(n%stop==0) return 0;
       stop--;
   }
   return 1;
}
int main()
{
    int numero;
    printf("\t\t\tCALCULO DO NUMERO PRIMO POR UMA FUNCAO\n\nDIGITE O NUMERO:");
    scanf("%d",&numero);
    printf("O RETORNO E': %d",primo(numero));
    return 0;
}
