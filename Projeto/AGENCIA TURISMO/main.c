#include <stdio.h>
#include <stdlib.h>
#include "mgturismo.h"

int main()
{   turismo *tur1=crialista();
    int op1,pw,contneg=0;

    while(1)
    {
        op1=menupricipal();
        if (op1==1)
        {
             menuusuario(tur1);

        }
        if (op1==2)
        {
           switch (pw=password())
           {
             case 1:
                tur1=cadpronto(tur1);
                break;
             case 2:
                tur1=menuadm(tur1);
                break;
            default:
                printf("\n\n\t\t\t\t((ACESSO NEGADO))\n\n");
                contneg++;
                if (contneg==3) exit(0);
            }
        }

    }
    return 0;
}
