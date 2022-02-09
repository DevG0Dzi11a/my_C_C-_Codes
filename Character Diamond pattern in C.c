#include<stdio.h>


void main()
{
    int i, j, n, k=1;
    char a;
    system("COLOR 0A");
    printf("Enter a value : ");
    scanf("%d", &n);


    for(i=1; i<=n; i++)
     {
         a='A';


         for(j=1; j<=n-i; j++)
         {
             printf(" ");

         }
         for(j=1; j<=(2*i-1); j++)
         {
             printf("%c", a);
             if(j<i)
                 a++;
             else
                 a--;


         }
         printf("\n");

     }


    for(i=n-1; i>=1; i--)
    {

        a='A';
        for(j=1; j<=k; j++)
        {
            printf(" ");

        }
        for(j=1; j<=(2*i-1); j++)
        {
            printf("%c", a);
             if(j<i)
                 a++;
             else
                 a--;
        }
        k++;
        printf("\n");
    }
}
