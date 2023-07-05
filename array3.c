#include<stdio.h>
void main()
{
    int n;
    printf("Enter The Length of Array :");
    scanf("%d", &n);
    int i,a[n],b[n];
    printf("Enter The Element of Array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++)
    {
        b[i]=*(a+i);
    }
    printf("First Array Element is : ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
     printf("\n2nd Array Element is : ");
     for(i=0;i<n;i++)
     {
        printf("%d\t",b[i]);
     }


}
