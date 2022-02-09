#include<stdio.h>

void main()
{
    int i,j,c,n;
    printf("Array Size: ");
    scanf("%d" ,&n);
    int arr[n],freq[n];
    printf("Array elements: ");
    for(i = 0; i<n;i++)
    {
        scanf("%d" ,&arr[i]);
        freq[i]=-1;
    }

    for(i=0;i<n;i++)
    {
       c = 1;
       for(j=i+1;j<n;j++)
       {
           if(arr[i]==arr[j])
           {
               c++;
               freq[j]=0;
           }

       }

       if(freq[i] != 0)
       {
           freq[i]=c;
       }
    }


    printf("Unique Element is : ");
    for(i=0; i<n; i++)
    {
        if(freq[i]==1)
        {
            printf("%d ",arr[i]);
        }
    }
}
