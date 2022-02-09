#include<stdio.h>

int main()
{
    int i,a,n;
    printf("Array Length: \n");
    scanf("%d" ,&n);
    int a[n];
    printf("Array Elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d" ,&a[i]);
    }
    printf("\nIndex that wanna delete");
    scanf("%d" ,&a);
    if(a < 0 || a > n)
      {
         printf("Invalid\n");
      }
    else

  {
        for(i=a-1;i<n;i++)
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
