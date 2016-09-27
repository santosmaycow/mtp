#include<stdio.h>
#include<string.h>
#include<ctype.h>
void letras(char *frase,int n, char* nova_frase);
int main()
{
    char frase[256], nova_frase[256];
    printf("digite uma frase com qualquer caracter desejado\n");
    gets(frase);
    letras(frase,strlen(frase),nova_frase);
    printf("frase alterada %s\n", nova_frase);
    return 0;
}
void letras(char *frase,int n, char* nova_frase)
{
    int i,j=0;
    for(i=0;i<n;i++){
        if(isalpha(frase[i])){
            nova_frase[j]=frase[i];
                j++;}
}
    nova_frase[j]='\0';
}
