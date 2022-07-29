#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 12
int main()
{
    float m[MAX][MAX],soma=0.0;
    int linha,i,j;
    char t[2];

    scanf("%d",&linha);
    scanf("%s",t);
    for (i=0; i<MAX; i++)
    {
        for(j=0; j<MAX;j++)
        {
            scanf("%f",&m[i][j]);

        }
    }

    for(j=0; j<MAX; j++)
    {
        soma+=m[linha][j];

    }

    if(strcmp(t,"S")==0) printf("%.1f\n",soma);
    if(strcmp(t,"M")==0) printf("%.1f\n",soma/MAX);

    return 0;
}
