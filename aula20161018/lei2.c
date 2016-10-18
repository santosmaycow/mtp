#include<stdio.h>
#include<time.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    srand(time(0));
    int x,numero;
    FILE *arquivo;
    char nome [256];
    printf("informe o nome do arquivo que deseja salvar os numeros aleatorios e ler?\n");
    fflush(stdin);
    gets(nome);
    strcat(nome,".txt");
    arquivo= fopen(nome,"w");
    for(x=0;x<50;x++)
    {
        numero=rand()%10;
        fprintf(arquivo,"%d  ",numero);
    }
    fclose(arquivo);

    arquivo= fopen(nome,"r");
    for(x=0;x<50;x++)
    {
        fscanf(arquivo,"%d",&numero);
        printf("%d",x);
    }
    fclose(arquivo);
    return 0;
}
