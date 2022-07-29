#include "filme.h"

Filme cadastrofilme()
{
    Filme movie;
    printf("\nDIGITE O NÚMERO DE REGISTRO: ",setlocale(LC_ALL,""));
    scanf("%d",&movie.reg);
    fflush(stdin);
    printf("\nDIGITE O NOME DO FILME: ");
    scanf("%[^\n]",movie.nome);
    fflush(stdin);
    printf("\nDIGITE A CATEGORIA DO FILME: ");
    scanf("%[^\n]",movie.categoria);
    fflush(stdin);
    printf("\nDIGITE A NOTA DE AVALIAÇÃO: ");
    scanf("%d",&movie.avaliacao);
    fflush(stdin);
    printf("\nDIGITE O ANO DO FILME: ");
    scanf("%d",&movie.ano);
    fflush(stdin);
    return movie;

}

void imprimefilme(Filme movie)
{
    printf("\nREGISTRO: %d",movie.reg);
    printf("\nFILME: %s",movie.nome);
    printf("\nCATEGORIA: %s",movie.categoria);
    printf("\nAVALIAÇÃO: %d",movie.avaliacao);
    printf("\nANO: %d\n",movie.ano);
}

Indice cadastroindice()
{
    Indice i;
    i.reg=0;
    i.pos=0;
    return i;
}

int hash(int reg)
{
    return (reg%MOD);
}
void gravahash(Filme movie)
{

}
