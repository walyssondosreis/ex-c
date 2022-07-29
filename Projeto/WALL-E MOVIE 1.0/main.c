#include "filme.h"


int main()
{
    int i;
    Indice ind=cadastroindice();
    if((ARQ=fopen("FILME.db","rb+"))==NULL)
    {
        ARQ=fopen("FILME.db","wb+");
        if(ARQ==NULL)
        {
            printf("\n\t\t\tIMPOSSIVEL ABRIR/CRIAR ARQUIVO\n");
            exit(1);
        }
    }
    if((INDEX=fopen("INDEX.db","rb+"))==NULL)
    {
        INDEX=fopen("INDEX.db","wb+");
        if(INDEX==NULL)
        {
            printf("\n\t\t\tIMPOSSIVEL ABRIR/CRIAR ARQUIVO\n");
            exit(1);
        }
        for(i=0; i<MOD; i++) fwrite(&ind,sizeof(Indice),1,INDEX);
    }
    Filme f;
    f=cadastrofilme();
    imprimefilme(f);
    fclose(ARQ);
    fclose(INDEX);

    return 0;
}
