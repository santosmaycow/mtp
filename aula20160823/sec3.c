#include<stdio.h>
int main()
{
    float a,b,c,media;
    printf("digite tres notas de um aluno para receber a media\n");
    scanf("%f %f %f", &a,&b,&c);
    media= ((a*2)+(b*3)+(c*5))/10;
    printf("media ponderada do aluno = %f", media);
     return 0;
}
