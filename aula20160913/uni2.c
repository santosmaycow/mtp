#include<stdio.h>
union uniao{
int i;
float f;
};
int main(){
    union uniao numero;
    char opcao;
    do{
        printf(" quer entrar com int ou float??");
        scanf("%c", &opcao);
        fflush(stdin);
    }while(opcao!= 'i' && opcao!= 'f');
    if(opcao=='i')
    {
        printf("entre com o int:\n");
        scanf("%d", &numero.i);
        printf("como float: %e\n", numero.f);

    }
    else {
        printf("entre com o float:\n");
        scanf("%f", &numero.f);
        printf("como int: %d\n", numero.i);


    }

return 0;
}
