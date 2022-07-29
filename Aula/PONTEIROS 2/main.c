#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[5]={10,11,12,13,14};
    int *p,i;
    p=v;
    printf("p=%p, v=%p ; &v[0]=%p\n",p,v,&v[0]);
    for (i=0;i<5;i++)
    {
        printf("p=%p, &v[%d]=%p,*p=%d\n",p,i,&v[i],*p);
        p++;
    }

    return 0;
}
