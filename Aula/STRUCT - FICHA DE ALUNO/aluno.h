#ifndef ALUNO_H_INCLUDED
#define ALUNO_H_INCLUDED

typedef struct
{
    int matricula;
    char nome[51];
    char telefone[21];
    double mensalidade;
} aluno;
aluno digitaraluno();
void imprimiraluno(aluno a);

#endif // ALUNO_H_INCLUDED
