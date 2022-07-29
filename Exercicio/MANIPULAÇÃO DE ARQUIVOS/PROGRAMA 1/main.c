#include <stdio.h>
#include <stdlib.h>
#define N 4

FILE* arq;

void quick_sort(int *a,int tvetor) {
    int i, j, x, y,fimvetor;

    fimvetor=tvetor-1;
    i = 0;
    j = fimvetor;
    x = a[j / 2];

    while(i <= j) {
        while(a[i] < x && i < fimvetor) {
            i++;
        }
        while(a[j] > x && j > 0) {
            j--;
        }
        if(i <= j) {
            y = a[i];
            a[i] = a[j];
            a[j] = y;
            i++;
            j--;
        }
    }

    if(j > 0) {
        quick_sort(a, j);
    }
    if(i < fimvetor) {
        quick_sort(a,fimvetor);
    }
}

void gravaarquivo (int* v)
{

    arq=fopen("arquivo.bin","wb");
    fwrite(v,sizeof(int),N,arq);
    fclose(arq);

}
void lerarquivo (int* s)
{
    arq=fopen("arquivo.bin","rb");
    fread(s,sizeof(int),N,arq);
    fclose(arq);
}

int main()
{
    int i,v[N],u,s[N];
    for(i=0;i<N;i++)
    {
        printf("\n(%d) DIGITE UM NUMERO: ",i+1);
        scanf("%d",&v[i]);
    }

    quick_sort(v,N);

    printf("\n\n");
    for(i=0;i<N;i++)
    {
        printf(" %d",v[i]);
    }
    printf("\n\n\t\tDESEJA GRAVAR EM ARQUIVO? ");
    scanf("%d",&u);
    if (u==1) gravaarquivo(v);

    printf("\n\n\t\tDESEJA LER ARQUIVO EXISTENTE? ");
    scanf("%d",&u);
    if (u==1)
    {
    lerarquivo(s);
    printf("\n\n");
    for(i=0;i<N;i++)
        {
        printf(" %d",s[i]);
        }
    }
    return 0;
}
