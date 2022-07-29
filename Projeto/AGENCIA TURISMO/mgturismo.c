#include <stdio.h>
#include "mgturismo.h"
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define PASS "321"

int menupricipal ()
{
    while(1)
    {
        system("cls");
        int x=0;
        printf("\n\t\tMG TURISMO - \"TURISMO NACIONAL E INTERNACIONAL\"\n",setlocale(LC_ALL,""));
        while(x<80)
        {
            printf("-");
            x++;
        }
        printf("\n\n(1) CONSULTA\n(2) CADASTRO");
        printf("\n\nDIGITE A OPÇÃO DESEJADA: ");
        scanf("%d",&x);
        fflush(stdin);
        if (x==0) exit(0);
        if (x<1||x>2) continue;
        else return x;
    }
}
int menuusuario(turismo *l)
{
    while(1)
    {
        char tip[4];
        system("cls");
        int x=0;
        printf("\n\t\tMG TURISMO - \"TURISMO NACIONAL E INTERNACIONAL\"\n");
        while(x<80)
        {
            printf("-");
            x++;
        }
        printf("\n\n(1) LISTAR\n(2) CALCULAR VIAGEM\n(0) RETORNAR MENU PRINCIPAL");
        printf("\n\nDIGITE A OPÇÃO DESEJADA: ");
        scanf("%d",&x);
        fflush(stdin);
        switch(x)
        {
        case 0:
            return 0;
        case 1:
            impturismo(l);
            break;
        case 2:
            calculaviagem();
            break;
        default:
            continue;
        }
    }
}
turismo* menuadm(turismo* l)
{
    system("cls");
    int x=0;
    printf("\n\t\tMG TURISMO - \"TURISMO NACIONAL E INTERNACIONAL\"\n");
    while(x<80)
    {
        printf("-");
        x++;
    }
    printf("\n(1) CADASTRAR PONTO TURÍSTICO\n(2) EXCLUIR PONTO TURÍSTICO\n");
    printf("\nDIGITE A OPÇÃO DESEJADA: ");
    scanf("%d",&x);
    fflush(stdin);
    switch (x)
    {
    case 1:
        return cadturismo(l);
        break;
    }

    return NULL;
}
turismo *cadturismo(turismo* l)
{
    turismo* tur;
    tur=(turismo*)malloc(sizeof(turismo));
    system("cls");
    int x=0;
    printf("\n\t\tMG TURISMO - \"TURISMO NACIONAL E INTERNACIONAL\"\n");
    while(x<80)
    {
        printf("-");
        x++;
    }
    printf("\n\nNACIONAL -> NAC\nINTERNACIONAL -> INT\nTIPO TURÍSTICO:");
    scanf("%[^\n]s",tur->tipo);
    fflush(stdin);
    if (strcmp(tur->tipo,"int")==0||strcmp(tur->tipo,"INT")==0)
    {
        printf("\n\n*NOME\nPAÍS:");
        scanf("%[^\n]s",tur->nac);
        fflush(stdin);
    }
    else strcpy(tur->nac,"BRASIL");
    printf("\n\n*SIGLA\nESTADO:");
    scanf("%[^\n]s",tur->estado);
    fflush(stdin);
    printf("\n\n*NOME\nCIDADE:");
    scanf("%[^\n]s",tur->cidade);
    fflush(stdin);
    printf("\n\n*NOME\nPONTO TURISTICO:");
    scanf("%[^\n]s",tur->ponto);
    fflush(stdin);
    printf("\n\n*Valor Por Pessoa\nVALOR DO PACOTE:");
    scanf("%f",&tur->vpacote);
    fflush(stdin);
    tur->prox=l;
    return tur;

}
turismo *cadpronto(turismo* l)
{
    turismo* tur;
    tur=(turismo*)malloc(sizeof(turismo));
    system("cls");
    int x=0;
    printf("\n\t\tMG TURISMO - \"TURISMO NACIONAL E INTERNACIONAL\"\n");
    while(x<80)
    {
        printf("-");
        x++;
    }
    strcpy(tur->tipo,"NAC");
    strcpy(tur->nac,"BRASIL");
    strcpy(tur->estado,"MG");
    strcpy(tur->cidade,"MONTES CLAROS");
    strcpy(tur->ponto,"PARQUE DA LAPA GRANDE");
    tur->vpacote=100;
    tur->prox=l;
    return tur;
}
void impturismo(turismo *tur)
{

    system("cls");
    int x=0;
    printf("\n\t\tMG TURISMO - \"TURISMO NACIONAL E INTERNACIONAL\"\n");
    while(x<80)
    {
        printf("-");
        x++;
    }
    while (tur!=NULL)
    {
        printf("\nPONTO TURÍSTICO: \"%s\"",tur->ponto);
        printf("\nCIDADE: %s",tur->cidade);
        printf("\nESTADO: %s",tur->estado);
        printf("\nPAÍS: %s",tur->nac);
        printf("\nTIPO: %s",tur->tipo);
        printf("\nPREÇO PACOTE P/PESSOA: R$ %.2f",tur->vpacote);
        printf("\n\n");
        tur=tur->prox;
    }
    getch();
}
turismo* crialista()
{
    return NULL;
}
void buscatipo(turismo* tur,char v[])
{
    turismo *l=tur;
    if (strcmp(v,"nac")==0||strcmp(v,"Nac")==0||strcmp(v,"NAC")==0)
    {
        while(1)
        {
            if (strcmp(l->tipo,"nac")==0||strcmp(l->tipo,"Nac")==0||strcmp(l->tipo,"NAC")==0)
            {
                printf("\n\nDESTINO: ___\n\n%s\n%s\n%s",l->ponto,l->cidade,l->estado);
            }
            l=l->prox;
            if (l==NULL) break;
        }
        getch();
    }
    else
    {
        printf("\n\n*DIGITE NAC P/ NACIONAL OU INT P/ INTERNACIONAL");
        getch();
    }
}

void calculaviagem()
{
    float vp;
    int p;
    system("cls");
    int x=0;
    printf("\n\t\tMG TURISMO - \"TURISMO NACIONAL E INTERNACIONAL\"\n");
    while(x<80)
    {
        printf("-");
        x++;
    }
    printf("\nDIGITE O VALOR DO PACOTE: ");
    scanf("%f",&vp);
    printf("\nDIGITE O NÚMERO DE PESSOAS: ");
    scanf("%d",&p);
    printf("\n\nCUSTO DE VIAGEM: R$%.2f",vp*p);
    getch();
}


int password()
{

    char pw[4];
    int x=0;
    system("cls");
    printf("\n\n DIGITE SENHA: ");
    while (x<3)
    {
        pw[x]=getch();
        fflush(stdin);
        x++;
    }
    if (strcmp(pw,"123")==0) return 1;
    if (strcmp(pw,PASS)==0) return 2;
    else return 0;
}


