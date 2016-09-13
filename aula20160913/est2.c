#include<stdio.h>
#include<math.h>

#define RECEBEPT(c,ponto)\
({printf("entre com a coordenada x de %c: ",c);\
scanf("%f", &ponto.x);\
printf("entre com a coordenada y de %c: ",c);\
scanf("%f", &ponto.y);\
printf("entre com a coordenada z de %c: ",c);\
scanf("%f", &ponto.z);})

#define MOSTRAPT(ponto)\
({printf("(%.2f; %.2f; %.2f)\n", ponto.x, ponto.y, ponto.z);})

#define SOMA(pta,ptb,soma)\
({soma.x=pta.x+ptb.x;\
soma.y=pta.y+ptb.y;\
soma.z=pta.z+ptb.z;})

#define DISTANCIA(pta,ptb, distancia)\
({distancia=sqrt(pow(pta.x-ptb.x,2.f)+pow(pta.y-ptb.y,2.f)+pow(pta.z-ptb.z,2.f));})

struct ponto{
    float x;
    float y;
    float z;
};
int main()
{
    struct ponto a,b,s;
    float distancia;
    RECEBEPT('a',a);
    RECEBEPT('b',b);
    SOMA(a,b,s);
    MOSTRAPT(s);
    DISTANCIA(a,b,distancia);
    printf("a distancia entre os pontos e: %.4f", distancia);

    return 0;
}

