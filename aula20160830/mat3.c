#include<stdio.h>
#include<math.h>
int main()
{
    float numero,base,logaritimo;
    printf("digite um numero e uma base para calcular seu log\n\n");
    scanf("%f %f", &numero, &base);
    logaritimo=log(numero)/log(base);
    printf("valor do log= %f",logaritimo);
    return 0;
}

