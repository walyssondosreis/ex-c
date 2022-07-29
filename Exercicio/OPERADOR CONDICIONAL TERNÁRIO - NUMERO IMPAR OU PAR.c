#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int x;
	printf("POR FAVOR DIGITE O VALOR DE X: ");
	scanf("%d",&x);
	printf("O VALOR E' %s",(x%2)?"IMPAR":"PAR");
	
	return 0;
}
