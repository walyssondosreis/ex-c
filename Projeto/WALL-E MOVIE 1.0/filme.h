#ifndef FILME_H_INCLUDED
#define FILME_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#define MOD 71

typedef struct
{
    int reg;
    char nome[200];
    char categoria[20];
    int avaliacao;
    int ano;
} Filme;

typedef struct
{
    int reg;
    int pos;
} Indice;

FILE* ARQ;
FILE* INDEX;
Filme cadastrofilme();
Indice cadastroindice();
void imprimefilme(Filme movie);
int hash(int reg);
void gravahash(Filme movie);



#endif // FILME_H_INCLUDED
