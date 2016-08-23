#include<stdio.h>
int main()
{
    float base, altura, area;
    printf("digite o valor da base de um triangulo ");
    scanf("%f", &base);
    printf("digite o valor da altura de um triangulo ");
    scanf("%f", &altura);
    area= (base*altura)/2;
    printf("area do triangulo= %f unidades de area", area);
     return 0;
}
