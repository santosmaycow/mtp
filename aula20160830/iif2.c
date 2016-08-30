#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
#include<float.h>
int main()
{
    int cont,numero;
    double fat=1;
    printf("digite um numero e receba seu fatorial\n");
    scanf("%d",&numero);
    for(cont=numero;cont>1;cont--)
        fat=fat*cont;
    printf("fatorial de %d = %.0f", numero, fat);
    return 0;
    }
