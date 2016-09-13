#include<stdio.h>
#define MOSTRABOOL(x) ({printf("%s\n",(x)? "verdadeiro" : "falso");})
typedef enum{false=0, true =1} bool;
int main()
{
bool v = true;
bool f= false;
MOSTRABOOL(v);
MOSTRABOOL(f);
MOSTRABOOL(2==2);
MOSTRABOOL(2>3);
MOSTRABOOL(2==3);
MOSTRABOOL(3>2);

    return 0;
}
