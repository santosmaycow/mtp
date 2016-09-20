#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void chatbot ();
int main()
{
    srand(time(0));
    char msg[256];
    printf("**olá meu nome e schwamsterson, quer conversar?\n");
    do{
        fgets(msg,sizeof(msg),stdin);
        chatbot();
    }while(strncmp(msg,"tchau",5)!=0);

    return 0;
}
void chatbot ()
{
    int qualfala=rand()%7;
    switch(qualfala)
   {
    case 0: printf("**tudo bem?\n");break;
    case 1: printf("**ok?\n");break;
    case 2: printf("**LOL MAN\n");break;
    case 3: printf("**que legal\n");break;
    case 4: printf("**que chato\n");break;
    case 5: printf("**fale mais sobre isso\n");break;
    case 6: printf("**sobre o que quer falar??\n");break;

   }
}
