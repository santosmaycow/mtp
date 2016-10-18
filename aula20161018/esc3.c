#include<stdio.h>
#include<time.h>
#include<string.h>
#include<stdlib.h>

struct ponto{float x;float y;};
int main()
{
    int n,i;
    FILE * arquivo;
    char nome[256];
    printf("quantos pontos deseja digitar?\n");
    scanf("%d", &n);
    struct ponto * p = (struct ponto*)malloc(n*sizeof(struct ponto));
    printf("digite o nome do arquivo:\n");
    fflush(stdin);
    gets(nome);
    strcat(nome, ".txt");
    arquivo= fopen(nome,"w");
    for(i=0;i<n;i++)
    {
        printf("digite a coordenada x: ");
        scanf("%f",&p[i].x);
        printf("digite a coordenada y: ");
        scanf("%f",&p[i].y);
        fprintf(arquivo,"%f %f\n", p[i].x, p[i].y);
    }
    free(p);
    fclose(arquivo);

    return 0;
}
