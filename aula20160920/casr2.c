#include<stdio.h>
#include<math.h>
#include<ctype.h>
 void limpa_buffer();
 void quadrado(int n);
 void raiz(float n);
 void transforma(char n);
int main(){
    int i;
    float j;
    char k;
    printf("digite um valor inteiro:\n");
     void limpa_buffer();
    scanf("%d",&i);
    printf("digite um float:\n");
     void limpa_buffer();
     scanf("%f",&j);
    printf("digite um char:\n");
     void limpa_buffer();
     scanf("%c",k);
     quadrado(i);
     raiz(j);
     transforma(k);
    return 0;
    }

void limpa_buffer() {
  int c;
  while((c = getchar()) != EOF && c != '\n');
}

void quadrado(int n){
printf("o quadrado do seu numero int e %d\n",n*n);
}
void raiz(float n){
    printf("a raiz do seu numero float e %f\n",sqrt(n));
}
void transforma(char n){
    if(islower(n))
        toupper(n);
    if(isupper(n))
        tolower(n);
        printf(" seu caracter: %c\n", n);
}

//void recebe_dado(char tipo, void * endereco){
  //  int c;
    //switch(tipo){
    //case 'i': scanf("%d",(int *)endereco);break;
    //case 'f': scanf("%f",(float *)endereco);break;
    //case 'c': scanf("%c",(char *)endereco);break;
    //}
    //while((c=getchar())!= EOF && c != '\n');
//}
