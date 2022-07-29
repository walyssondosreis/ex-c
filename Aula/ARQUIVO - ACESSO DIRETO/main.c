#include <stdio.h>
#include <stdlib.h>
FILE* ARQ;
char nomearq[]="arquivo.bin";

struct aluno {

 int matricula;
 char nome[51];
 char telefone[51];
 double mensalidade;


};typedef struct aluno Aluno;

void cadastroaluno()
{

    ARQ=fopen(nomearq,"rb+");

    Aluno p;
    printf("\nDIGITE O NUMERO DA MATRICULA: ");
    scanf("%d",&p.matricula);
    printf("\nDIGITE O NOME DO ALUNO: ");
    scanf("%s",p.nome);
    fflush(stdin);
    printf("\nDIGITE O TELEFONE DO ALUNO: ");
    scanf("%s",p.telefone);
    fflush(stdin);
    printf("\nDIGITE O VALOR DA MENSALIDADE: ");
    scanf("%lf",&p.mensalidade);

    fseek(ARQ,(p.matricula)*sizeof(Aluno),SEEK_SET);
    fwrite(&p,sizeof(Aluno),1,ARQ);
    fclose(ARQ);

}
void consultaaluno(int matricula)
{
    Aluno coleguinha;
    ARQ=fopen(nomearq,"r");
    fseek(ARQ,matricula*sizeof(Aluno),SEEK_SET);
    fread(&coleguinha,sizeof(Aluno),1,ARQ);

    printf("\nNOME DO ALUNO: %s", coleguinha.nome);
    printf("\nTELEFONE: %s",coleguinha.telefone);
    printf("\nVALOR DA MENSALIDADE: R$ %.2lf", coleguinha.mensalidade);
}
int main()
{
    int x;
 //   cadastroaluno();
    printf("\n\n\nDIGITE NUMERO DA MATRICULA PARA CONSULTAR: ");
    scanf("%d",&x);
    consultaaluno(x);


    return 0;
}
