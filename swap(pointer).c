#include<stdio.h>

void swap(int *A,int *B)
{
    int t;
    t=*A;
    *A=*B;
    *B=t;

}
void main()
{
    int a,b;
    scanf("%d%d", &a, &b);
    printf("Before Swap : A = %d & B = %d",a,b);
    swap(&a,&b);
    printf("\nAfter Swap : A = %d & B = %d",a,b);
}
