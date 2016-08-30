#include<stdio.h>
#include<math.h>
int main()
{
    float x1,y1,x2,y2,distancia;
    printf("digite as coordenadas (x,y) do primeiro ponto\n");
    scanf("%f %f", &x1, &y1);
    printf("digite as coordenadas (x,y) do segundo ponto\n");
    scanf("%f %f", &x2, &y2);
    distancia=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    printf("distancia entre os pontos= %f", distancia);
    return 0;
}
