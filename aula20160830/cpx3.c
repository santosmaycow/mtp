#include<stdio.h>
#include<complex.h>
int main()
{
    double r1,i1;
    double complex z1,z2;
    printf("digite a parte real e a imaginaria de um numero complexo\n\n");
    scanf("%lf %lf", &r1, &i1);
    z1=r1 + i1 *I;
    z2=csqrt(z1);
    printf("raiz quadrada = %lf + %lf *I", creal(z2), cimag(z2));
    return 0;
}
