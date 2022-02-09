#include<stdio.h>


void main()
{
    int i, j, n, a, k=1;
    system("COLOR 0A");
    printf("Enter a value : ");
    scanf("%d", &n);


    for(i=1; i<=n; i++)
     {
         a=1;


         for(j=1; j<=n-i; j++)
         {
             printf(" ");

         }
         for(j=1; j<=(2*i-1); j++)
         {
             if( j==1 || j==(2*i-1))
             printf("*");
         else
            printf(" ");


         }
         printf("\n");

     }


    for(i=n-1; i>=1; i--)
    {

        a=1;
        for(j=1; j<=k; j++)
        {
            printf(" ");

        }
        for(j=1; j<=(2*i-1); j++)
        {
            if(j==1 || j==(2*i-1))
            printf("*");
            else
                printf(" ");

        }
        k++;
        printf("\n");
    }
}


