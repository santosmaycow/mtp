#include<stdio.h>
int main()
{
    int numero;
    printf("Digite um numero inteiro qualquer \n ");
    scanf("%i", &numero);
    if(numero%2==0)
        printf("\no numero %i e par", numero);
    else
        printf("\no numero %i e impar", numero);
    if(numero%3==0)
        printf("\no numero %i e multiplo de 3", numero);
    if(numero%5==0)
        printf("\no numero %i e multiplo de 5", numero);
    if(numero%7==0)
        printf("\no numero %i e multiplo de 7", numero);
        return 0;
}



