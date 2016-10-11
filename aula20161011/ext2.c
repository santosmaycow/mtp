#include<stdio.h>

typedef struct produto{
char nome[32];
int codigo;
float preco;
}produto ;
typedef struct vendas{
    produto *produtos=(produto*)malloc(sizeof(produto));
    int quantidades;

}vendas;

int main()
{
    int n;
    produto *produtos=(produto*)malloc(sizeof(produto));
    vendas *venda=(venda*)malloc(sizeof(venda));
    do{
    printf("MENU:\n1-ver todos os produtos\n2-incluir produto\n3-excluir produto\n4-ver todas as vendas\n5-incluir venda\n6-exluir venda\n7-sair");
    scanf("%d",n);
    }while(n!=7);
    return 0;
}
void recebe(char tipo, void * endereco) {
    int c;
    switch(tipo){
        case 'i': scanf("%d",(int*) endereco); break;
        case 'f': scanf("%f",(float*) endereco); break;
        case 'd': scanf("%lf",(double*) endereco); break;
        case 'c': scanf("%c",(char*) endereco); break;
    }
    while((c = getchar()) != EOF && c != '\n'); // apagar o buffer de entrada
}

void recebeSTR(char * endereco, int n) {
    fgets(endereco, n, stdin);
    if(endereco[strlen(endereco)-1] == 10)
       endereco[strlen(endereco)-1] = '\0';
}
