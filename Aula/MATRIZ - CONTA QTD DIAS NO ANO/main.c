#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dmes[12]={31,28,31,30,31,30,3131,30,31,30,31};
    int dia,mes,ano,total,i;
    printf("DIgite a data no formato DD/MM/AAAA: ");
    //*%c lê caracter do teclado e não atribui a nada
    scanf("%d%*c%d%*c%d",&dia,&mes,&ano);
    if (((!(ano%4)&&ano%100))||!(ano%400))
        dmes[1]=29;//se ano for bissexto
    total=dia;
    for(i=0;i<mes-1;i++)
        total+=dmes[i];
    printf("Total de dias desde o inicio do ano: %d\n\n",total);
    return 0;
}
