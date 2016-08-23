#include<stdio.h>
#include<time.h>
int main()
{
    int numero, numero2;
    srand(time(0));
    numero2=rand()%2;
    printf("digite um numero inteiro e positivo qualquer\n\n ");
    scanf("%d", &numero);
    printf("numero sorteado= %d \n\n", numero2);
    numero+=numero2;
    if(numero%2==0)
        printf("seu numero somado com um numero aleatorio resultou em um numero par\n\n");
    else
        printf("seu numero somado com um numero aleatorio resultou em um numero impar\n\n");
    return 0;
}
