#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num1,num2=0,resultado=0;
    char operacao,bs;
    do
        {
         printf("\n\t\t\t\tCALCULADORA FACIT \n\n\t+ :ADICAO\n\t- :SUBTRACAO\n\t/ :DIVISAO\n\t* :MULTIPLICACAO\n\t%% :RESTO\n\tr :RAIZ QUADRADA\n\tp :POTENCIA\n\n\t\t");
         //printf(" \ne Outro numero inteiro (Exemplo: 56+34) ou 0 0 0 para sair: ");
		 scanf("%d",&num1);
         if (num1==0)break;
         scanf("%c",&operacao);
         if (operacao!='r') scanf("%d",&num2);
         if (operacao=='+') resultado = num1+num2;
         if (operacao=='-') resultado = num1-num2;
         if (operacao=='*') resultado = num1*num2;
         if (operacao=='/') resultado = num1/num2;
         if (operacao=='%') resultado = num1%num2;
         if (operacao=='r') resultado = sqrt(num1);
         if (operacao=='p') resultado = pow(num1,num2);
         printf("\t\tRESULTADO=%d",resultado);
         getch();
         system("cls");
        }while(1);
    return 0;
}
