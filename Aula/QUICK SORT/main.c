#include <stdio.h>
#include <stdlib.h>
//ORDENACAO RAPIDA
void rapida (int n,int* v)
{
    if (n<=1)
        return;
    else {
        int x=v[0];
        int a=1;
        int b=n-1;
        do{
            while (a<n&&v[a]<=x) a++;
            while (v[b]>x)b--;
            if (a<b){ // FAZ TROCA
                int temp=v[a];
                v[a]=v[b];
                v[b]=temp;
                a++;b--;
            }
        }while (a<=b);
        //TROCA PIVÔ
        v[0]=v[b];
        v[b]=x;
        //ORDENA SUBVETORES RESTANTES
        rapida(b,v);
        rapida(n-a,&v[a]);
    }
}
int main()
{
    int i;
    int v[8]= {25,48,37,12,57,86,33,92};
    rapida(8,v);
    printf("VETOR ORDENADO: ");
    for(i=0; i<8; i++)
        printf("%d ",v[i]);
        printf("\n");

    return 0;
}
