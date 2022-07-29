#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
FILE* ARQ;
FILE* INDEX;
char narq[]="arquivo.bin";
char nindex[]="index.bin";

typedef struct aluno{
    int mat;
    char nome[50];
}Aluno;

typedef struct indice{
    int mat;
    int pos;
} Indice;

Aluno cadaluno();
void inserirarq();
void imprimearq();
void imprimealuno(Aluno a);

int main()
{
    int b;
    if((ARQ=fopen(narq,"rb+"))==NULL) ARQ=fopen(narq,"wb+");
    if((INDEX=fopen(nindex,"rb+"))==NULL) INDEX=fopen(nindex,"wb+");
    while(1){ inserirarq(); system("cls"); printf("\n\nDESEJA CADASTRAR? "); if(getch()!=13){ system("cls"); break;} system("cls");}

    imprimearq();
   /* printf("\n\nDIGITE A MAT BUSCA: ");
    scanf("%d",&b);
    buscaseq(b);*/
    fclose(ARQ);
    fclose(INDEX);

    return 0;
}

Aluno cadaluno()
{
    Aluno a;
    printf("\nDIGITE NUMERO DA MATRICULA: ");
    scanf("%d",&a.mat);
    printf("\nDIGITE O NOME DO ALUNO: ");
    scanf("%s",a.nome);
    fflush(stdin);
    return a;
}

void imprimealuno(Aluno a)
{
    printf("\n\nMATRICULA: %d",a.mat);
    printf("\nNOME: %s",a.nome);
}
void inserirarq()
{
    int pos;
    Aluno a,a1;
    Indice i,i1;
    a=cadaluno();

    //GRAVA NO ARQUIVO DE DADOS
    fseek(ARQ,0,SEEK_END);
    pos=ftell(ARQ);
    fwrite(&a,sizeof(Aluno),1,ARQ);
    i.mat=a.mat;
    i.pos=pos;

    //GRAVA NO ARQUIVO DE INDICE
    fseek(INDEX,0,SEEK_END);
    fseek(INDEX,-sizeof(Indice),SEEK_CUR);
    while(fread(&i1,sizeof(Indice),1,INDEX))
    {
        if(i1.mat>i.mat)
        {
            fseek(INDEX,0,SEEK_CUR);
            fwrite(&i1,sizeof(Indice),1,INDEX);
            fseek(INDEX,-2*sizeof(Indice),SEEK_CUR);
        }
        else break;
        if(ftell(INDEX)==0)break;
        fseek(INDEX,-sizeof(Indice),SEEK_CUR);
    }
    fseek(INDEX,0,SEEK_CUR);
    fwrite(&i,sizeof(Indice),1,INDEX);


}

void imprimearq()
{
    Aluno a;
    Indice i;
    fseek(INDEX,0,SEEK_SET);
    while((fread(&i,sizeof(Indice),1,INDEX)))
    {
        fseek(ARQ,i.pos,SEEK_SET);
        fread(&a,sizeof(Aluno),1,ARQ);
        imprimealuno(a);
    }
    printf("\n\n");

}
