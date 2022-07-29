#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{
	int x;
	char nome[5];
	printf("POR FAVOR DIGITE O VALOR DE X: ");
	scanf("%d",&x);
	x==2 ? strcpy(nome,"DOIS"):strcpy(nome,"");
	printf("NUMERO: %d (%s)",x,nome);

	return 0;
}
