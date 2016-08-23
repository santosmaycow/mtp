#include<stdio.h>
int main()
{
    int i, numero;
    printf("digite um numero para verificarmos se e primo ou nao\n\n");
    scanf("%d", &numero);
    for(i=2;i<numero;i++)
        if(numero%i==0){
            printf("o numero nao e primo");
            break;
        }
        if(i==numero)
            printf(" o numero e primo");
        return 0;
}
