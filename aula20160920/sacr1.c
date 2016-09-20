#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int pega_carta();
char mostra_carta(int c);
int main()
{
    srand(time(0));
    int n,cont,soma_user=0, carta_user;
    int i,carta1, carta2,coma_comp;
    carta1=pega_carta();
    carta2=pega_carta();
    printf("ola, vamos jogar 21\n\n quantas cartas vc deseja??");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        carta_user=pega_carta();
        printf("%c\n", mostra_carta(carta_user));
        soma_user=soma_user+carta_user;
    }
    if(soma_user>21)
        printf("\nperdeu playboy\n");
    else{
        if(soma_user>carta1+carta2)
            printf("\nvoce ganhou");
        else
             printf("\nvoce ganhou, minhas cartas: %c  %c \n", mostra_carta(carta1), mostra_carta(carta2));
    }
    return 0;
}
int pega_carta()
{
    return rand()%13+1;

}
char mostra_carta(int c)
{
    char carta;
    switch(c){
    case 1: carta='a';break;
    case 10: carta='d';break;
    case 11: carta='j';break;
    case 12: carta='q';break;
    case 13: carta='k';break;
    default: carta=48+c;
    }
    return carta;
}
