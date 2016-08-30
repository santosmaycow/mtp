#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
#include<float.h>
int main()
{

    int i;
    double numero,total;
    float numero2,total2;
    printf("digite um numero\n");
    scanf("%f", &numero);
    numero=1/numero;
    for(i=0;i<729;i++)
        total+=numero;
    printf("numero double= %.15f\n\n", total);
    numero2=1/numero;
    for(i=0;i<729;i++)
        total2+=numero2;
    printf("numero float= %.15f\n\n", total);


    return 0;
}
