#include<stdio.h>
void igual(int *A, int n, int *B, int m);
int main()
{
    int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
    int n = sizeof(A)/sizeof(int);
    int B[] = {1, 2, 3, 4, 5, 6, 8, 10, 12, 7, 29};
    int m = sizeof(B)/sizeof(int);
    igual(A,n,B,m);
    return 0;
}
void igual(int *A, int n, int *B, int m)
{
    int i,j;
    printf(" numeros iguais:\n");
    for (i=0;i<n;i++)
        {
        for(j=0;j<m;j++)
    {
        if(A[i]==B[j])
          printf("%d\n", A[i]);
    }
        }
}
