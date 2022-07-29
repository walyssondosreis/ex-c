#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    int contv=0,contc=0;
    char ch;
    if((fp=fopen("arquivo.txt","r"))==NULL)
    {
        printf("O arquivo.txt nao existe\n");
        exit(1);
    }
    while((ch=fgetc(fp))!=EOF)
    {
        if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
        {
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') contv+=1;
            else contc+=1;
        }

    }
    printf("\n\nVOGAIS NO ARQUIVO: %d\nCONSOANTES NO ARQUIVO: %d",contv,contc);
    fclose(fp);
    return 0;
}
