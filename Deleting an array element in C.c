#include<stdio.h>

int main()
{
    int i,x,n;
    printf("Array Length: \n");
    scanf("%d" ,&n);
    int a[n];
    printf("Array Elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d" ,&a[i]);
    }
    printf("\nIndex that wanna delete");
    scanf("%d" ,&x);
    if(x < 0 || x > n)
      {
         printf("Invalid\n");
      }
    else

  {
        for(i=x-1;i<n;i++)
        {
            a[i]=a[i+1];
        }

    printf("Modified array: \n");
    for(i=0;i<n-1;i++)
    {
        printf("%d\n", a[i]);
    }
   }

    return 0;

}
