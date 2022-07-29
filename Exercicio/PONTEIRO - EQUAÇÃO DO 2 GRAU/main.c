#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int raizes(double a,double b, double c,double *x1,double *x2)
{
    double delta;
    delta=b*b-(4*a*c);
    if (delta==0)
    {
        *x1=((-b+sqrt(delta))/2*a);
        return 1;
    }
    if (delta>0)
    {
       *x1=((-b+sqrt(delta))/2*a);
       *x2=((-b-sqrt(delta))/2*a);
       return 2;
    }
    if (delta<0)
    {
        return 0;
    }


}
int main()
{
    int retorno;
    double a,b,c,r1=0,r2=0;

    printf("\nDIGITE A: ");
    scanf("%lf",&a);
    printf("\nDIGITE B: ");
    scanf("%lf",&b);
    printf("\nDIGITE C: ");
    scanf("%lf",&c);

    retorno = raizes(a,b,c,&r1,&r2);
    printf("RETORNO: %d\n",retorno);
    if (r1!=0) printf("RAIZ: %.2lf\n",r1);
    if (r2!=0) printf("RAIZ: %.2lf\n",r2);
    return 0;
}
