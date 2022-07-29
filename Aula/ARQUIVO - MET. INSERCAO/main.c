#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

FILE* ARQ;
char narq[]="arquivo.bin";
char walle[]="\n\t\t\tWALYSSON PEREIRA DOS REIS\n\t\t________________________________________\n\n";

struct aluno
{
    int mat;
    char nome[60];

};
typedef struct aluno Aluno;

void inserirarq();
void imprimearq();
void imprimealuno(Aluno a);
Aluno cadaluno();
void buscaseq();
void buscabin();
void salvatxt();


int main()
{
    int u,b;
    if((ARQ=fopen(narq,"rb+"))==NULL) ARQ=fopen(narq,"wb+");
    while(1)
    {
        printf("%s\n",walle);
        printf("\n1 - CADASTRAR\n2 - BUSCA SEQUENCIAL\n3 - IMPRIMIR TUDO\n4 - BUSCA BINARIA\n5 - SALVAR ARQ.TEXTO");
        printf("\n\nDIGITE A OPCAO: ");
        scanf("%d",&u);
        fflush(stdin);
        switch (u)
        {
        case 1:
            system("cls");
            printf("%s",walle);
            inserirarq();
            system("cls");
            break;
        case 2:
            system("cls");
            printf("%s",walle);
            buscaseq();
            system("cls");
            break;
        case 3:
            system("cls");
            printf("%s",walle);
            imprimearq();
            system("cls");
            break;
        case 4:
            system("cls");
            printf("%s",walle);
            buscabin();
            system("cls");
            break;
        case 5:
            system("cls");
            printf("%s",walle);
            salvatxt();
            system("cls");
            break;

        case 0:
            system("cls");
            exit(0);

        }

    }
    fclose(ARQ);

    return 0;
}

Aluno cadaluno()
{
    Aluno a;
    printf("\nDIGITE NUMERO DA MATRICULA: ");
    scanf("%d",&a.mat);
    fflush(stdin);
    printf("\nDIGITE O NOME DO ALUNO: ");
    scanf("%[^\n]s",a.nome);
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
    Aluno a,a1;
    a=cadaluno();
    fseek(ARQ,0,SEEK_END);
    fseek(ARQ,-sizeof(Aluno),SEEK_CUR);
    while(fread(&a1,sizeof(Aluno),1,ARQ))
    {
        if(a1.mat>a.mat)
        {
            fseek(ARQ,0,SEEK_CUR);
            fwrite(&a1,sizeof(Aluno),1,ARQ);
            fseek(ARQ,-2*sizeof(Aluno),SEEK_CUR);
        }
        else break;
        if(ftell(ARQ)==0)break;
        fseek(ARQ,-sizeof(Aluno),SEEK_CUR);
    }
    fseek(ARQ,0,SEEK_CUR);
    fwrite(&a,sizeof(Aluno),1,ARQ);


}

void imprimearq()
{
    Aluno a;
    fseek(ARQ,0,SEEK_SET);
    while((fread(&a,sizeof(Aluno),1,ARQ)))
    {
        imprimealuno(a);
    }
    printf("\n");
    getch();
}

void buscaseq()
{

    Aluno a1;
    int x;
    printf("\n\nDIGITE A MAT BUSCA: ");
    scanf("%d",&x);
    fflush(stdin);

    fseek(ARQ,0,SEEK_SET);
    while(fread(&a1,sizeof(Aluno),1,ARQ))
    {
        if(a1.mat==x)
        {
            imprimealuno(a1);
        }
    }
    getch();
}
void buscabin()
{
    int x,p1,m;
    int e=0;
    int d=p1-1;
    Aluno a1;

    printf("\n\nDIGITE A MAT BUSCA: ");
    scanf("%d",&x);
    fflush(stdin);

    fseek(ARQ,0,SEEK_END);
    p1=(ftell(ARQ))/(sizeof(Aluno));
// printf("\n\nTAMANHO DO ARQUIVO: %d",p1);
// getch();

    while(e<=d)
    {
        m=(e+d)/2;
        fseek(ARQ,m*sizeof(Aluno),SEEK_SET);
        fread(&a1,sizeof(Aluno),1,ARQ);
        if(a1.mat==x)
        {
            imprimealuno(a1);
            getch();
            return;
        }
        if(a1.mat<x) e=m+1;
        else d=m-1;
    }
    printf("\n\n\MATRICULA INEXISTENTE!");
    getch();


}
void salvatxt()
{
    FILE* ARQTXT=fopen("arquivo.txt","w");
    Aluno a;
    rewind(ARQ);
    while(fread(&a,sizeof(Aluno),1,ARQ)!=NULL) fprintf(ARQTXT,"%d %s\n",a.mat,a.nome);
    fclose(ARQTXT);
    printf("\n\n\nARQUIVO GRAVADO COM SUCESSO!");
    getch();

}
