#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char *argv[])
{
    int numero=0,cont=0,resp=99;
    srand(time(NULL));
    numero=rand()%10;
    printf("\n Eu escolhi um numero e voce vai tentar adivinhar!");
    while (numero!=resp){
        printf("\n\n Digite um numero entre 0 e 10: ");
        scanf("%d",&resp);
        if (resp<0||resp>10)continue;
        if (numero>resp)printf("\n\n o numero e' > que %d\n",resp);
        if (numero<resp)printf("\n\n o numero e' < que %d\n",resp);
        cont=cont+1;

    }
    printf("\n\n\n Voce conseguiu em %d tentativas!!!\n\n\n",cont);
    return 0;
}
