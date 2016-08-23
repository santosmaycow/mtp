#include<stdio.h>
#include<time.h>
int main()
{
    int dado1,dado2,dado3;
    srand(time(0));
    dado1=rand()%6+1;
    dado2=rand()%6+1;
    dado3=rand()%6+1;
    printf("numeros sorteados = %d ,%d, %d", dado1,dado2,dado3);
    if(dado1+dado2+dado3==7 || dado1+dado2+dado3==11)
        {
        printf("\n\nparabens, voce ganhou");
        }
    else
        printf("\n\nvoce nao ganhou, tente outra vez");
    return 0;


    }
