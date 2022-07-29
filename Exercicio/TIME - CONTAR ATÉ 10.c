#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main()
{
int inicio,fim;
inicio=time(NULL);
printf("Conte ate 10 e aperte ENTER");
getchar();
fim=time(NULL);
printf("Passaram-se %d segundos!",fim-inicio);
    return 0;
}
