#include<stdio.h>
#include<ctype.h>
int main()
{
    char texto[100],j;
    int i;
    printf("digite um texto com letras maiusculas ou minusculas\n\n");
    gets(texto);
    for(i=0;texto[i]!='\0';i++)
    {
        texto[i]=toupper(texto[i]);
    }
    puts(texto);

   return 0;
}

