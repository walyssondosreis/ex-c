#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include<conio.h>
int main()
{

    char url[]="nomerec",urlrec[]="valorrec",nome[20]="WALYSSON";
    FILE *arq;
    FILE *rec;
    do
    {
        arq=fopen(url,"r");
        rec=fopen(urlrec,"r");
        system("cls");
        int num,x,contat=0,contax=1,recorde;
        char repita;
        fscanf(rec,"%d",&recorde);
        fclose(rec);
        srand((unsigned)time(NULL));
        system("color F0");
        printf("\n\n\t\t DESAFIO DOS 10 - MESTRE: ",setlocale(LC_ALL,""));
        if(arq!=NULL) printf("%s\n ______________________________________________________________________________",fgets(nome,sizeof(nome),arq));else printf("**AINDA SEM VENCEDORES :[");
        printf("\n\n [*VOC� TER� 7 TENTATIVAS PARA ACERTAR 3 NUMEROS INTEIROS ALEAT�RIOS DE 1 � 10]\n ______________________________________________________________________________");

        while(1)
        {
            x=1+(rand()%10);
            while(1)
            {
                if (contat==7) break;
                contat=contat++;
                printf("\n\n\tTENTATIVA %d :QUAL O N�MERO? ",contat);
                scanf("%d",&num);
                if (num==x)
                {
                    system("color 0A");
                    printf("\n\n\t\t\t\t\tVoC� ACERTOU O %d NUMERO (%d)",contax,x);
                    contax=contax+1;
                    break;
                }
                if (num>x)
                {
                    system("color FC");
                    printf("\n\n\t*DICA: O N�MERO � MENOR QUE %d",num);
                }
                else
                {
                    system("color F9");
                    printf("\n\n\t*DICA: O N�MERO � MAIOR QUE %d",num);
                }

            }
            if(contax==4) break;
            if(contat==7)  break;
        }
        system("cls");
        if(contax==4)
        {
            printf("\n\n\n\t\t\tPARAB�NS VOC� GANHOU! :]\n\n\t\t\t:::FORAM %d TENTATIVAS:::\n\n\n\n\n\n",contat);
            if (contat<=recorde)
            {
                fclose(arq);
                recorde=contat;
                printf("\n\n\n\n\tVOC� � UM RECORDISTA! DIGITE SEU NOME: ");
                scanf("%s",&nome);
                arq=fopen(url,"w");
                fprintf(arq,"%s",nome);
                fclose(arq);
                rec=fopen(urlrec,"w");
                fprintf(rec,"%d",contat);
                fclose(rec);
                arq=fopen(url,"r");


            }
            else
            {
                if (rec==NULL||arq==NULL)  printf("\n\n\n\tAINDA N�O HOUVE RECORDISTAS!");
                else printf("\n\n\n\tRECORDISTA: %s - %d TENTATIVAS",nome,recorde);
            }
        }
        else
        {
            if (rec==NULL||arq==NULL) printf("\n\n\n\t\t\t\tLAMENTO VOC� PERDEU! :[\n\n\n\n\n\n");
            else{
            printf("\n\n\n\t\t\t\tLAMENTO VOC� PERDEU! :[\n\n\n\n\n\n");
            printf("\n\n\n\tRECORDISTA: %s - %d TENTATIVAS",nome,recorde);}
        }
        printf("\n\n\n\n\n\t\t*DESEJA TENTAR NOVAMENTE? [Se sim tecle ENTER] :");
        repita=getch();
        fflush(stdin);
        fclose(arq);
        if (repita==13) continue;
        else break;
    }
    while(1);
    return 0;
}
