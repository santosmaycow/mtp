#include<stdio.h>
#include<complex.h>
int main()
{
    double r1,i1;
    double complex z1,z2,z3;
    printf("digite a parte real e a imaginaria de um numero complexo\n\n");
    scanf("%lf %lf", &r1, &i1);
    z1=r1 + i1 *I;
    z2=conj(z1);
    z3=z2*z1;
    printf("multiplicacao pelo conjugado= %lf + %lf *I", creal(z3), cimag(z3));
    return 0;
}
