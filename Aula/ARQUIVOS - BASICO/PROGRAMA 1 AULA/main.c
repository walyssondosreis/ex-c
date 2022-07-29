#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *fp;
   char texto[100];
   if((fp=fopen("arquivo.txt","r"))==NULL)
   {
       printf("O ARQUIVO NÃO EXISTE!!\n");
       exit(1);
   }
   while((fgets(texto,100,fp))!=NULL) printf("%s",texto);
   fclose(fp);
   system("pause");

    return 0;
}
