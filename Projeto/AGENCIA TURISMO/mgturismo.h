#ifndef MGTURISMO_H_INCLUDED
#define MGTURISMO_H_INCLUDED

typedef struct turismo
{
    char tipo[20];
    char nac[20];
    char estado[20];
    char cidade[30];
    char ponto[50];
    float vpacote;
    struct turismo *prox;
}turismo;

int menupricipal();
int menuusuario(turismo *l);
turismo* menuadm(turismo *l);
int password();
turismo *cadturismo(turismo* l);
turismo *cadpronto(turismo* l);
void impturismo(turismo *tur);
turismo* crialista();
void buscatipo(turismo* l,char v[]);
void calculaviagem();




#endif // MGTURISMO_H_INCLUDED
