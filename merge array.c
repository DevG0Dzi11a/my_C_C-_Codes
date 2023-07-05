#include<stdio.h>
void main()
{
    int n1,i,j,k,n2,T;
    printf("Size of Array1: ");
    scanf("%d" ,&n1);
    int arr1[n1];
    printf("Elements of Array1 : ");
    for(i=0;i<n1;i++)
    {
      scanf("%d",&arr1[i]);
    }
    printf("Size of Array2 : ");
    scanf("%d" ,&n2);
    int arr2[n2];
    printf("Elements of Array2 : ");
    for(i=0;i<n2;i++)
    {
      scanf("%d",&arr2[i]);
    }
    for(i=0;i<n2;i++)
    {
        arr1[n1+i]=arr2[i];
    }
    printf("Merge of two array : ");
        for(i=0;i<n1+n2;i++)
        {
            printf("%d\t",arr1[i]);
        }
    T=n1+n2;

    for(i=0;i<T;i++)
      for(j=i+1;j<T;j++)
        if(arr1[i]==arr1[j])
      {
          for(k=j+1;k<T;k++)
            arr1[k-1]=arr1[k];
          j--;
         T--;
      }
      printf("\nAfter Merge & Delete Duplicate element : ");
      for(i=0;i<T;i++)
      {
          printf("%d\n",arr1[i]);
      }
}
