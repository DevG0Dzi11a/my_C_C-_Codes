#include<stdio.h>

void main()
{
    int i, j, n, k, a;
    system("COLOR 0A");
    printf("Enter n = ");
    scanf("%d", &n);

    k=0;
    for(i=n; i>=1; i--)
    {
        a=1;
        for(j=1; j<=k; j++)
        {
            printf(" ");
        }
        k++;
        for(j=1; j<=2*i-1; j++)
        {
             printf("%d", a);
             if(j<i)
                 a++;
             else
                 a--;
        }
        printf("\n");
    }
    for(i=2; i<=n; i++)
     {

         a=1;


         for(j=1; j<=n-i; j++)
         {
             printf(" ");

         }
         for(j=1; j<=(2*i-1); j++)
         {
             printf("%d", a);
             if(j<i)
                 a++;
             else
                 a--;


         }
         printf("\n");

     }

}
