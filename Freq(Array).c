#include<stdio.h>

void main()
{
    int i,j,c,n;
    printf("Array Size : ");
    scanf("%d" ,&n);
    int arr[n],fr[n];
    printf("Array Elements: ");
    for(i = 0; i<n;i++)
    {
        scanf("%d" ,&arr[i]);
        fr[i]=-1;
    }

    for(i=0;i<n;i++)
    {
       c = 1;
       for(j=i+1;j<n;j++)
       {
           if(arr[i]==arr[j])
           {
               c++;
               fr[j]=0;
           }

       }

       if(fr[i] != 0)
       {
           fr[i]=c;
       }


    }

    printf("Frequency: \n");

    for(i=0;i<n;i++)
    {
        if(fr[i] != 0)
        {
            printf("%d occurs %d times\n",arr[i],fr[i]);
        }
    }

}
