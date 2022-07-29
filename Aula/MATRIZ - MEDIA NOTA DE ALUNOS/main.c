#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    float nota,maior=0.0,menor=0.0;
    char nome[50],exibir[50]="SEM NOME",alunog[50],alunob[50];
    while(1)
    {
        printf("\n**NOME DO ALUNO: ");
        scanf("%s",nome);
        if (strcmp(nome,"fim")==0) break;
        else strcpy(exibir,nome);
        printf("\n***NOTA DO ALUNO: ");
        scanf ("%f",&nota);
        if (nota<menor) {menor=nota; strcpy(alunob,nome);}
         else if(nota>maior) {maior=nota; strcpy(alunog,nome);}
    }
    printf("\n\tALUNO MAIOR NOTA %s COM %.2f",alunog,maior);
    printf("\n\tALUNO MENOR NOTA %s COM %.2f",alunob,menor);
    return 0;
}
