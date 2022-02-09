#include<stdio.h>
void sa(int A,int B,int *Sum,float *Avg)
{
   *Sum=A + B;
   *Avg=(float)*Sum/2;
}
void main()
{
    int n1,n2,sum;
    float avg;
    printf("Enter Two Positive Integer: ");
    scanf("%d%d", &n1, &n2);
    sa(n1,n2,&sum,&avg);
    printf("Sum = %d & Avg = %.2f",sum,avg);
}
