#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int m[10],j,x,maior=0,menor=99999,dupmenor=1,dupmaior=1;
    printf("\n VAMOS MONTAR UM VETOR?\n\n",setlocale(LC_ALL,""));
    //BLOCO DE MONTAGEM DO VETOR
    for (j=0;j<10;j++)
    {
        printf("\nDIGITE O %d%c ELEMENTO DO VETOR: ",j+1,'º');
        scanf("%d",&x);
        m[j]=x;
        if(m[j]>maior) { maior=m[j]; dupmaior=1;} 
		else if(m[j]==maior) { dupmaior++;}
        if(m[j]<menor) { menor=m[j]; dupmenor=1;} 
        else if(m[j]==menor) { dupmenor++;}
        
    }
    //BLOCO DE IMPRESSÃO VETOR
    printf("\n\nVETOR: ");
    for(j=0;j<10;j++)
    {
        printf("[%02d] ",m[j]);
    }
    printf("\n\nO MAIOR VALOR DO VETOR É: %02d ",maior);
    if (dupmaior>1) printf("(%d) VALORES IGUAIS!\n",dupmaior);
    printf("\nO MENOR VALOR DO VETOR É: %02d ",menor);
    if (dupmenor>1) printf("(%d) VALORES IGUAIS!\n",dupmenor);
    return 0;
}
