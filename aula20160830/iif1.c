#include<stdio.h>
#include<stdlib.h>
#include<float.h>
#include<time.h>
int main()
{
    int i;
    srand(time(0));
    if(1.0f>1.0f-FLT_EPSILON*2.0)
        printf("1 e maior que 1 menos epsilon da maquina\n\n");
    else
        printf("1 nao e maior que 1 menos epsilon da maquina\n\n");
        for(i=0;i<10;i++)
            printf("numero aleatorio= %f\n", (float)rand()/RAND_MAX);
    return 0;

}
