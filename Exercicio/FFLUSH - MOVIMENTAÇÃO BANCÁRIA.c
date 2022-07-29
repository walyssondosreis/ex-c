#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,documento;
    char letra;
    float valor;

    printf("\n\n DIGITE O NUMERO MOVIMENTACAO: ");
    scanf("%d",&num);
    printf("\n\n DIGITE O TIPO DE MOVIMENTACAO: ");
    fflush(stdin);
    scanf("%c",&letra);
    printf("\n\n DIGITE O VALOR: ");
    scanf("%f",&valor);
    printf("\n\n DIGITE O NUMERO DO DOCUMENTO: ");
    scanf("%d",&documento);
    system("cls");
    printf("\n\n\t\tNUMERO MOVIMENTACAO: %03d\n\n\t\tTIPO DE MOVIMENTACAO: %c\n\n\t\tVALOR DESEJADO: %.2f\n\n\t\tNUMERO DO DOCUMENTO: %04d",num,letra,valor,documento);


    return 0;
}
