#include<stdio.h>
#include<time.h>
#include<string.h>
int main()
{
    FILE * arquivo;
    int x, quantidade,i, n;
    char nome[256];
    srand(time(0));
    printf("quantos numeros aleatorios quer gerar vei??\n");
    scanf("%d", &quantidade);
    printf("qual o nome do arquivo quer salvar:\n");
    fflush(stdin);
    gets(nome);
    strcat(nome,".txt");
    arquivo=fopen(nome, "w");
    for(i=0;i<quantidade;i++)
        {
        x=rand()%10;
        fprintf(arquivo,"%d", x);
        }
    fclose(arquivo);

    return 0;
}
