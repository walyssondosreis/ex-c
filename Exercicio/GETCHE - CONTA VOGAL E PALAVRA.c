#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
int main()
{
    char letra;
    int contavogal=0,contapalavra=1;
    printf("\nDIGITE SUA FRASE:\n\n ");
    do
    {
        letra=getche();
        if(letra=='a'||letra=='e'||letra=='i'||letra=='o'||letra=='u') contavogal=contavogal+1;
        if(letra==' ') contapalavra+=1;
    }while(letra!=27);
    printf("\n\n\tQUANTIDADE DE VOGAIS: %d",contavogal);
    printf("\n\n\tQUANTIDADE DE PALAVRAS: %d\n",contapalavra);
    return 0;
}
