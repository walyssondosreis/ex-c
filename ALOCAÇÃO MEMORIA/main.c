#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p,i,n,*q;
    printf("QUAL A QUANTIDADE DE VALORES:\n");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        p[i]=i+1000;
    }
    q=p;
    for (i=0;i<n;i++)
    {
        printf("%d -",*(q++));
    }
    return 0;
}
