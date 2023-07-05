#include<stdio.h>

void main()
{
    int i,k1=0,k2=0,n;
    printf("Array Length : ");
    scanf("%d" ,&n);
    int arr[n],even[n],odd[n];
    printf("Array Elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d" ,&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i] %2 == 0)
            even[k1++]=arr[i];
        else
            odd[k2++]=arr[i];
    }

    printf("\nArray Element of even[%d] are ...\n",k1);
    for(i=0;i<k1;i++)
    {
        printf("%d\t",even[i]);
    }
    printf("\nArray Element of odd[%d] are ...\n",k2);

    for(i=0;i<k2;i++)
    {
       printf("%d\t",odd[i]);
    }


}
