#include <stdio.h>
#include <stdlib.h>

int somaimpar(int n)
{
    int conta,soma=0;
    for(conta=0;conta!=n;conta++)
    {
        if ((conta%2)!=0) soma+=conta;
    }


    return soma;
}

int main()
{
    int num;
    printf("DIGITE NUMERO:");
    scanf("%d",&num);
    printf("\n\nA SOMA DOS NATURAIS IMPARES E': %d",somaimpar(num));
    return 0;
}
