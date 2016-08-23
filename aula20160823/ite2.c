#include<stdio.h>
int main()
{
    int base, expoente,i,resultado=1;
    printf("digite um valor de base e um de expoente para calcular a exponenciacao\n\n");
    scanf("%d %d", &base, &expoente);
    for(i=1;i<=expoente;i++)
        resultado=base*resultado;
    printf("resultado= %d", resultado);
    return 0;
}
