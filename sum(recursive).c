#include<stdio.h>
int sum(int n)
{
   if(n==2)
        return 2;
   else
        return n + s(n-2);
}
void main()
{
    int n,Sum;
    printf("Enter N: ");
    scanf("%d", &n);
    if(n%2==1)
       n++;
    Sum=sum(n);
    printf("Sum = %d",Sum);
}



