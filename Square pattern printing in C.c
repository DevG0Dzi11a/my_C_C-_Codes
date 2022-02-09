#include<stdio.h>

void main()
{

    int i, j, n, a;
    printf("Enter an odd n = ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        a=1;

        for(j=1; j<=n; j++)
        {
            if(i==1 || i==n || j==1 || j==n)

                printf("%d", a);
            else
            printf(" ");

            if(j==1 || j<=n/2)
                a++;
            else
                a--;


        }
        printf("\n");
    }
}
