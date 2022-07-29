#include <stdio.h>
#include <stdlib.h>
FILE* USER_ARQ;
FILE* ORDEM_ARQ;

char user[]="palavrauser.txt";
char ordem[]="palavraordem.txt";

void gravaarquivo(FILE* ARQ,char* cm,char* p)
{
    ARQ=fopen(cm,"a");
    fprintf(ARQ,p);
    fprintf(ARQ,"\n");
    fclose(ARQ);

}
char* comparapalavra(char* p1,char* p2)
{
	int i,contp1=0,contp2=0;
	for (i=0;p1[i]!='\0'||p2[i]!='\0';i++)
	{
		if(p1[i]<p2[i]) return p1;
		if(p2[i]<p1[i]) return p2;
	}
	i=0;
	while(1)
	{
		if(p1[i]!='\0')contp1++;
		if(p2[i]!='\0')contp2++;
		i++;
	}
	if(contp1<contp2) return p1;
	else return p2;
}
void excluirpalavras(char* p)
{
     char a[30],b[30];
     strcpy(b,p);
     USER_ARQ=fopen("palavrauser.txt","r+");
     while((fscanf(USER_ARQ,"%s\n",a))!=EOF)
    {
        if(strcmp(a,b)==0)
        {
            printf("\n\nACHEI O %s",a);
           // fseek(USER_ARQ,-(sizeof(a)),SEEK_CUR);
           // char x[30]="DELL   ";
           // fprintf(USER_ARQ,x);
        }
    }
    fclose(USER_ARQ);

}

void ordenapalavras()
{
    char a[30],b[30];
    USER_ARQ=fopen("palavrauser.txt","r");
    fscanf(USER_ARQ,"%s\n",b);

    while((fscanf(USER_ARQ,"%s\n",a))!=EOF)
    {
        printf("PALAVRA: %s\n", a);
        strcpy(b,comparapalavra(a,b));
    }


    printf("PALAVRA 1 ORDEM: %s", b);
    excluirpalavras("abacate");

    fclose(USER_ARQ);



}

int main()
{
    char p[30];
    while(1)
    {printf("\n\nDIGITE PALAVRA: ");
    scanf("%s",p);
    if(strcmp(p,"0")==0) break;
    gravaarquivo(USER_ARQ,user,p);
    }
    ordenapalavras();



    return 0;
}
