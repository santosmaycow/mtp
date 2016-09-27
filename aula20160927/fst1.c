#include<stdio.h>

struct divisao_int{
int quociente;
int resto;
};

struct divisao_int div(int numerador, int denominador);

int main()
{
    struct divisao_int resposta;
    int dividendo, divisor;
    printf("entre com o dividendo e com o divisor:\n");
    scanf("%d %d", &dividendo, &divisor);
    resposta=div(dividendo, divisor);
    printf("quciente : %d\n resto: %d\n", resposta.quociente, resposta.resto);
    return 0;
}

struct divisao_int div(int numerador, int denominador)
{
        struct divisao_int resposta;
        resposta.quociente=numerador/denominador;
        resposta.resto=numerador%denominador;
        return resposta;
}
