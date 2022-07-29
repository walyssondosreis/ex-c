#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<conio.h>
int main()
{
    char frase[50];
    int j;
    printf("\nPOR FAVOR DIGITE SUA FRASE: \n ");
    for(j=0;j<50;j++)
    {
    	frase[j]=getch();
    	if(frase[j]==13)
    	 {
    	 	printf("%c",'\n');
    	 	frase[j]=getch();
			if(frase[j]==13) break;
    	 	else { printf("%c",frase[j]); continue;}
		 }
		if(frase[j]=='a') frase[j]='A';
    	if(frase[j]=='e') frase[j]='E';
    	if(frase[j]=='i') frase[j]='I';
    	if(frase[j]=='o') frase[j]='O';
    	if(frase[j]=='u') frase[j]='U';
        printf("%c",frase[j]);
    }
    return 0;
}
