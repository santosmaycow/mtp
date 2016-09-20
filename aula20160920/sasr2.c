#include<stdio.h>
void par();
void impar();
int main()
{
    int i;
    do{
        printf("digite 1 para ver os numeros pares ate 10 , digite 2 para ver os impares ate 10, digite 3 para sair\n\n");
        scanf("%d", &i);
        switch(i)
        {
            case 1: par();break;
            case 2: impar(); break;
        }
    }while(i!=3);
    return 0;
}
void par()
{
    int x;
    for(x=0;x<=10;x++)
        if(x%2==0)
            printf("%d,\n",x);
}
void impar()
{
    int x;
    for(x=0;x<=10;x++)
        if(x%2!=0)
            printf("%d,\n",x);
}
