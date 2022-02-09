#include<stdio.h>
void main()
{
    int n;
    printf("Enter length of array:");
    scanf("%d", &n);
    int a[n],i,sum=0;
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=*(a+i);
    }
    printf("Sum Of Array Elements = %d",sum);


}

