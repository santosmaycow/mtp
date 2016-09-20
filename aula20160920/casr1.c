#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void sorteio (int n);
int main()
{
    srand(time(0));
    int x;
    printf("digite um numero de 1 a 10 para rolar um sorteio: \n");
    scanf("%d", &x);
    sorteio(x);
    return 0;
}
void sorteio(int n){
    int i=rand()%10+1;
    if(n==i)
        printf("parabens, seu numero foi sorteado");
    else("nao foi dessa vez\n\n");
}
