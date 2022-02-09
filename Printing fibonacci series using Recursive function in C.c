#include<stdio.h>

void fibonacciSeries(int a, int b, int n)
{
    printf("%d ", a);
    if(n>1)
        fibonacciSeries(b, a+b, n-1);
}

void main()
{
    int n, t1=0, t2=1;
    printf("Enter n = ");
    scanf("%d", &n);
    printf("\n");

    printf("%d terms of Fibonacci series : ", n);
    fibonacciSeries(t1, t2, n);


}
