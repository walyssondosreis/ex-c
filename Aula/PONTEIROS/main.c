#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=5;
    int *p;
    p=&n;

    printf("&n = %p , p = %p\n",&n,p);
    printf("n = %d , *p = %d\n",n,*p);
    *p=10;
    printf("n = %d , *p = %d\n",n,*p);

    return 0;
}
