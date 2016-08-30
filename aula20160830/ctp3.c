#include<stdio.h>
#include<ctype.h>
int main()
{
    char texto[100];
    int i,cont=0;
    printf("digite um texto com letras maiusculas ou minusculas\n\n");
    gets(texto);
    for(i=0;texto[i]!='\0';i++)
    {
        if(isalpha(texto[i])){
            cont++;}
    }
    puts(texto);
    printf("numero de caracteres: %d", cont);

   return 0;
}

