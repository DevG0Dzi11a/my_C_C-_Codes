#include<stdio.h>
void main()
{
    int n;
    printf("Enter The Length Of Array : ");
    scanf("%d", &n);
    int a[n],i,max,min,index;
    printf("Enter The Element Of Array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    max=a[0];

    for(i=1;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("Maximum Value is %d",max);
    min=a[0];
    for(i=1;i<n;i++)
    {
        if(min>a[i])
        {
           min=a[i];
        }

    }
    printf("\nMinimum Value is : %d",min);
}
