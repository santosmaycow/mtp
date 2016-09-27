#include<stdio.h>
#include<string.h>
void contrario(char *frase,int n);
int main()
{
    char frase[256];
    printf("digite uma frase mano:\n");
    gets(frase);
    contrario(frase, strlen(frase)-1);
    return 0;
}
void contrario(char *frase, int n)
{
    if(n==0)
        printf("%c", frase[0]);
    else{
        printf("%c", frase[n]);
    return contrario(frase,n-1);}
}
