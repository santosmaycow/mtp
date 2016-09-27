#include<stdio.h>
int combinacoes(int a, int n);
int main()
{
    int a,n;
    printf("digite o total de bolas\n");scanf("%d", &a);
    printf("digite quantas quer retitar\n");scanf("%d", &n);
    printf("%d", combinacoes(a, n));
    return 0;
}

int combinacoes(int a, int n)
{
    return(n==0)? 1 : a*combinacoes(a-1,n-1)/n;
}
