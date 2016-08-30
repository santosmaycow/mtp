#include<stdio.h>
#include<math.h>
int main()
{
    float lado1,lado2,angulo,l_que_falta;
    printf("digite dois lados de um triangulo e um angulo em radianos");
    scanf("%f %f %f", &lado1, &lado2, &angulo);
    l_que_falta=sqrt(pow(lado1,2)+pow(lado2,2)-2*lado1*lado2*cos(angulo));
    printf("valor do outro lado= %f",l_que_falta);
    return 0;
}
