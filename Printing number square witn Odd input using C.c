#include<stdio.h>

void main()
{
    int i, j, n, a;
    printf("Enter n = ");
    scanf("%d", &n);
    if(n%2==1)
    {
        i=1;
    while(i<=n)
    {
        a=1;
        j=1;
        while(j<=n)
        {
            if(i==1 || i==n || j==1 || j==n)
                printf("%d", a);
                else
                    printf(" ");

            if(j==1||j<=n/2)
                a++;
            else
                a--;
            j++;

        }
        printf("\n");
        i++;
    }

    }
    else
        printf("invalid Input");




}
