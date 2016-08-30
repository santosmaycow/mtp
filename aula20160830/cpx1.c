#include<stdio.h>
#include<complex.h>
int main()
{
    double r1,r2,i1,i2;
    double complex r3,r2,z3;
    printf("digite a parte real e a imaginaria de um numero complexo\n\n");
    scanf("%lf %lf", &r1, &i1);
     printf("digite a parte real e a imaginaria de um numero complexo\n\n");
    scanf("%lf %lf", &r2, &i2);
    r3=r1+r2;
    i3=i1+i2;
    z3=r3 + i3 *I;
    printf("soma = %lf + %lf*I\n\n", creal(z3),cimag(z3));


    return 0;
}
