#include<stdio.h>
int main()
{
    char texto1[100], i;
    int cont=0;
    printf("digite uma frase qualquer\n\n");
    gets(texto1);
    for(i=texto1[0];i!='\0';cont++)
        i=texto1[cont];
    printf("numero de caracteres digitados = %d", cont-1);
    return 0;
}

