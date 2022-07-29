#include <stdio.h>
#include <stdlib.h>
#define N 127


struct aluno {
    int mat;
    char nome[81];
    char email[41];
    char turma;
    struct aluno* prox; // encadeamento na lista de colisão

};typedef struct aluno Aluno;
static int hash (int mat)
{
    return (mat%N);
}typedef Aluno* Hash[N];
Aluno* hsh_insere(Hash tab,int mat, char* n, char* e,char t)
{
    int h=hash(mat);
    Aluno*a=tab[h];
    while(a!=NULL)
    {
        if (a->mat==mat)
            break;
        a=a->prox;
    }
    if (a==NULL)
    {
        a=(Aluno*)malloc(sizeof(Aluno));
        a->mat=mat;
        a->prox=tab[h];
        tab[h]=a;
    }
    strcpy(a->nome,n);
    strcpy(a->email,e);
    a->turma=t;
    return a;
}
Aluno* hsh_busca(Hash tab, int mat)
{
    int h=hash(mat);
    Aluno* a=tab[h];
    while (a!=NULL)
    {
        if (a->mat==mat)
            return a;
        a=a->prox;
    }
    return NULL;
}

int main()
{

    Hash h;
    Aluno* a1;
    int i, mat;
    for (i=0;i<N;i++) h[i]=NULL;
        hsh_insere(h,307001,"joao","joao@gmail.com",'A');
        hsh_insere(h,307423,"maria","maria@gmail.com",'B');
    printf("DIGITE UMA MATRICULA PARA PESQUISAR: ");
    scanf("%d",&mat);
    a1=hsh_busca(h,mat);
//   if(a1!=NULL)
//        mostraraluno(a1);
//    else printf("ALUNO NAO ENCONTRADO");

    return 0;
}
