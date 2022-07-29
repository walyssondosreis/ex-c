//PROGRAMA: EQUAÇÃO 2º GRAU
//ESCRITO POR: WALYSSON DOS REIS
//DATA DE CRIAÇÃO: 01/04/2015
//PROPOSITO: RESOLVER EQUAÇÃO

#include<stdio.h>
#include<stdlib.h>
int main ()
{
	float a,b,c,delta,dlt,x1,x2;
	int comp;

while(1)
{
    system("cls");
    printf("\n\t\t\t\tEQUACAO DO 2 GRAU \\o/\n\n\t\t\t\tWALYSSON DOS REIS :]\n\t\t________________________________________________");
	printf("\n\n\tDIGITE A (COEFICIENTE DE X%c): ",253);
	scanf("%f",&a);
	printf("\n\n\tDIGITE B (COEFICIENTE DE X): ");
	scanf("%f",&b);
	printf("\n\n\tDIGITE C (COEFICIENTE NUMERICO): ");
	scanf("%f",&c);
	if (a==0&&b==0&&c==0){break;}

	if (a!=0)
	{
		delta=pow(b,2)-4*a*c;
		dlt=delta;
		delta=sqrt(delta);
		if(delta>=0)
	{
		x1=(-b+delta)/(2*a);
		x2=(-b-delta)/(2*a);
		    if(x1!=x2)
		    {
                printf("\n\n\t\t\t\t\t\tA RAIZ X1: %.2f",x1);
                printf("\n\n\t\t\t\t\t\tA RAIZ X2: %.2f",x2);
            }
            else
            {
                    printf("\n\n\t\t\t\t\t\tEXISTE UMA UNICA RAIZ: %.2f",x1);

            }
	}
        else
        {
            printf("\n\n\t\t\t\t\t\tSUA RAIZ E' NEGATIVA");
        }
}
    else
        {
            printf("\n\n\t\t\t\t\t\tEQUACAO NAO E' DO 2 GRAU ");
        }
    printf("\n\n\t\tDELTA = %.2f\n\n\n\t*****PARA ENCERRAR DIGITE 0 PARA TODOS OS COEFICIENTES!",dlt);
	getch();
}
	return 0;
}
