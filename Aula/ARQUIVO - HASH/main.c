#include <stdio.h>
#include <stdlib.h>
#define MOD 101
FILE *fp;
struct aluno
{
    int Matricula;
    char Nome[51];
    char Telefone[21];
    double Mensalidade;
    int prox;

};
typedef struct aluno Aluno;

void abrirArquivo(A)
{
    int i;
    if((fp=fopen("Arquivo.txt","rb+"))==NULL)
    {
        if((fp=fopen("Arquivo.txt","wb+"))==NULL)
        {
            printf("Erro ao abrir");
            exit(1);
        }
        for(i=0; i < MOD; i++)
        {
            fwrite(&A,sizeof(Aluno),1,fp);
        }
    }
}
int hash(int a)
{
    return a%MOD;
}
int Menu()
{
    int n;
    printf("\n---------------Menu----------\n");
    printf("1-Cadastrar\n2-Pesquisar\n3-Sair\n");
    printf("\nDigite a opcao desejada:");
    scanf("%d", &n);
    return n;
}
Aluno DigitarAluno()
{
    Aluno A;
    printf("Digite a matricula:");
    scanf("%d",&A.Matricula);
    printf("Digite o nome:");
    scanf("%s",A.Nome);
    printf("Digite telefone:");
    scanf("%s",A.Telefone);
    printf("Digite a mensalidade:");
    scanf("%lf",&A.Mensalidade);
    return A;

}
void Pesquisar()
{
    int Mat,pos;
    Aluno A;

    printf("Digite a Matricula");
    scanf("%d",&Mat);
   pos = hash(Mat)*sizeof(Aluno);
    do
    {
        fseek(fp,pos,SEEK_SET);
        fread(&A,sizeof(Aluno),1,fp);
        if(Mat==A.Matricula)
        {
            printf("\nAluno - Matricula: %d\n",A.Matricula);
            printf("\nAluno - Nome: %s\n",A.Nome);
            printf("\nAluno - Telefone: %s\n",A.Telefone);
            printf("\nAluno - Mensalidade: R$%.2lf\n",A.Mensalidade);
            return;
        }

        pos = A.prox;
    }
    while(pos>0);
    printf("Aluno nao encontrado");
}
int main()
{
    Aluno A,A1;
    A.Matricula = 0;
    int pos,ant,n;
    abrirArquivo(A);
    while(1)
    {
        n=Menu();
        if(n==1)
        {
            A = DigitarAluno();
            A.prox = 0;
            pos = hash(A.Matricula)*sizeof(Aluno);
            do
            {
                fseek(fp,pos,SEEK_SET);
                fread(&A1,sizeof(Aluno),1,fp);
                if(A1.Matricula==0||A1.Matricula==A.Matricula)
                {
                    break;
                }
                ant = pos;
                pos = A1.prox;
            }
            while(pos>0);
            if(A1.Matricula == 0 || A1.Matricula == A.Matricula)
            {
                A.prox = A1.prox;
                fseek(fp,pos,SEEK_SET);
                fwrite(&A,sizeof(Aluno),1,fp);
            }
            else
            {
                fseek(fp,0,SEEK_END);
                A1.prox = ftell(fp);
                fwrite(&A,sizeof(Aluno),1,fp);
                fseek(fp,ant,SEEK_SET);
                fwrite(&A1,sizeof(Aluno),1,fp);
            }
        }
        if(n==2)
            Pesquisar();
        {

        }
        if(n==3)
        {
            fclose(fp);
            break;
        }
    }
    return 0;
}
