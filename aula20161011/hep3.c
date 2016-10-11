#include<stdio.h>
char*inicializatexto();
char*recebetexto(char*texto);
int main()
{
    char*texto;
    texto=inicializatexto();
    printf(":::entre com seu texto (#+enter para sair):::\n");
    texto=recebetexto(texto);
    printf("::: o que tem no heap:::\n");
    printf("%s\n",texto);
    free(texto);
    return 0;
}

char*inicializatexto(){
    char*texto;
    texto=(char*)malloc(sizeof(char));
    texto[0]='\0';
    return texto;
    }
char*recebetexto(char*texto)
{
    int c, tamanho=0;
    do
    {
        c=getchar();
        if(c!='#'){
            tamanho++;
            texto=(char*)realloc(texto,tamanho*sizeof(char));
            texto[tamanho]='\0';
            texto[tamanho-1]=c;
        }
    }while(c!='#');
    return texto;
}
