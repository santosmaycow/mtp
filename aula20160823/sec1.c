#include<stdio.h>
int main()
{
    float lado, area;
    printf("Digite o valor do lado de um quadrado para encontrar sua area\n\n");
    scanf("%f", &lado);
    area=lado*lado;
    printf("Valor da area= %f", area);
    return 0;
}
