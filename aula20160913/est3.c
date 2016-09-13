#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define N 5

int q=0;

struct Cadastro{
char nome[100];
int idade;
int telefone;}cadastro[N];

void nome ()
{
    system("clear");
    int i;
    printf("nomes cadastrados:\n");
    for (i=0;i<N;i++)
        puts(cadastro[i].nome);


}

void idade ()
{
    system("clear");
    int i;
    printf("idades cadastradas:\n");
    for (i=0;i<N;i++)
       scanf("%d", cadastro[i].idade);


}

void telefone ()
{
    system("clear");
    int i;
    printf("telefones cadastrados:\n");
    for (i=0;i<N;i++)
        scanf("%d", cadastro[i].telefone);


}
void preenche ()
{
    fflush(stdin);
    printf("nome:\n ");
    gets(cadastro[q].nome);
    printf("idade:\n ");
    scanf("%d", &cadastro[q].idade);
    printf("telefone:\n ");
    scanf("%d", &cadastro[q].telefone);
}

int main()
{
    int i;
    struct Cadastro cadastro[N];
    do{
        printf("menu:\n digite a opcao \n 1 - listar nomes\n 2 - listar idades\n 3 - listar telefones\n 4 - novo cadastro\n 5 - sair do programa\n");
        scanf("%d", &i);
        switch(i)
        {
            case 1:
                nome();
                break;
            case 2:
                idade();
                break;
            case 3:
                telefone();
                break;
            case 4:
                preenche();
                break;
        }
    }while(i!=5);
    return 0;
}
