#include<stdio.h>
struct fracao{int numerador; int denominador;};
struct fracao soma(int num1, int den1, int num2, int den2 );
int main()
{   struct fracao resposta;
    int num1, den1, num2,den2;
    printf("digite uma fracao:\n");scanf("%d/%d",&num1,&den1);
    printf("\ndigite uma fracao:\n");scanf("%d/%d",&num2,&den2);
    resposta=soma(num1,den1,num2,den2);
    printf("soma = %d/%d \n\n",resposta.numerador,resposta.denominador);

    return 0;
}
struct fracao soma(int num1, int den1, int num2, int den2 )
{
    struct fracao resposta;
    resposta.denominador=den1*den2;
    resposta.numerador=(resposta.denominador/den1)*num1+(resposta.denominador/den2)*num2;
    return resposta;

}
