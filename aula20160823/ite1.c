#include<stdio.h>
int main()
{
    int numero, fatorial=1,i;
    printf("digite um numero para calcular seu fatorial\n\n");
    scanf("%d", &numero);
    for(i=1;i<=numero;i++)
        fatorial=fatorial*i;
    printf("\n\n%d fatorial = %d", numero, fatorial);
    return 0;
}

