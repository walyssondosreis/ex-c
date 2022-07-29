#include "aluno.h"
aluno digitaraluno()
{
    aluno a;
    printf("\nDigite a matricula:");
    scanf("%d",&a.matricula);
    printf("\nDigite o nome:");
    scanf(" %50[^\n]",a.nome);
    printf("\nDigite o telefone:");
    scanf(" %20[^\n]",a.telefone);
    printf("\nDigite a mensalidade:");
    scanf ("%lf",&a.mensalidade);

    return a;
}
void imprimiraluno(aluno a)
{
    printf("\n\n");
    printf("\nMatricula: \t%d",a.matricula);
    printf("\nNome: \t\t%s",a.nome);
    printf("\nTelefone: \t%s",a.telefone);
    printf("\nMensalidade: \t%.2lf",a.mensalidade);
    printf("\n\n");
}
