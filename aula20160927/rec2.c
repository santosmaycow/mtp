#include<stdio.h>
int soma(int *A,int n);
int main()
{
    int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
    int N = sizeof(A)/sizeof(int);
    soma(A, N);
    return 0;
}

int soma(int *A,int n)
{
    if(n==0)
        return A[0];
    else
        return A[n]+soma(A,n-1);


}
