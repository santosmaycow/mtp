#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int lanca_dado();
int main()
{
    srand(time(0));
    int i, soma=0,cont=0,n;
    n=lanca_dado();
    printf("voce lancara 5 dados, caso consiga uma soma maior ou igual a 27 em tres ou menos tentativas vc ganha\n\n");
    for(i=0;i<5;i++)
        soma=soma+n;
    if(soma>=27)
        printf("voce ganhou\n\n");
    else
        printf("perdeu cara, vc manda mto mal\n\n");

    return 0;
}
int lanca_dado(){
    int x=rand()%6+1;
    return x;
    }

