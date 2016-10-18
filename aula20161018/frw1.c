#include<stdio.h>
#define NCHAR 256
int main()
{
   int n;
    do{
    printf("ola, digite:\n1-inserir dados(nome,idade e altura\n2-ler as informacoes\n0- sair\n==============================================\n");
    fscanf(stdin, "%d", &n); getchar();
    if(n==1) recebe();
    if(n==2) recupera();
    }while(n!=0);
    return 0;
}

void recebe(){
 FILE * arquivo;
    char nome[NCHAR];
    int idade;
    float altura;
    printf("entre com seu nome:\n");
    fgets(nome,NCHAR,stdin);
    printf("entre com sua idade:\n");
    fscanf(stdin,"%d", &idade);
    printf("entre com sua altura:\n");
    fscanf(stdin,"%f", &altura);
    arquivo=fopen("C:\\Users\\1E30\\Documents\\mtp\\aula20161018\\info.txt", "w");
    fprintf(arquivo,"%s\n%d\n%f\n", nome, idade, altura);
    fclose(arquivo);
}

void recupera(){
     FILE * arquivo;
    char nome[NCHAR];
    int idade;
    float altura;
    arquivo=fopen("C:\\Users\\1E30\\Documents\\mtp\\aula20161018\\info.txt", "r");
    fprintf(arquivo,"%s\n%d\n%f\n", nome, &idade, &altura);
    fclose(arquivo);
    fprintf(stdout, "nome: %s\n", nome);
    fprintf(stdout, "idade: %d\n", idade);
    fprintf(stdout, "altura: %.2f\n", altura);

}
