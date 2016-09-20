#include<stdio.h>
#include<math.h>
float calcula_raiz(float a, float b, float c);
int main(){
    float a,b,c;
    printf("sua equacao e do tipo ax^2+bx+c, digite os coeficientes a, b e c: \n\n");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
   calcula_raiz(a,b,c);
    return 0;
}

float calcula_raiz(float a, float b, float c){
    float delta = pow(b,2) - 4*a*c, raiz1, raiz2,i='i';
    if(delta>0){
        raiz1 = (-b + sqrt(delta))/(2*a);
        raiz2 = (-b - sqrt(delta))/(2*a);
    }
    if(delta==0)
        raiz1 = raiz2 = -b/(2*a);
    if(delta<0){
        raiz1 = -b/(2*a) + i* sqrt(-delta)/(2*a);
        raiz2 = -b/(2*a) - i* sqrt(-delta)/(2*a);
    }
    printf("raizes: %f, %f", raiz1, raiz2);
     return raiz1, raiz2;

}
