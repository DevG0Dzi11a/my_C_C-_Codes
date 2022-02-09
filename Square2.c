#include<stdio.h>

void main()
{
    int i, j, n, a, b;
    printf("Enter n = ");
    scanf("%d", &n);

    a=b=n-1;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i==1)
                printf("%d",j);

            else if(j==1)
                printf("%d", i);
            else if(j==n)
                printf("%d", b--);
            else if(i==n)
                printf("%d", a--);
            else
                printf(" ");
        }
        printf("\n");
    }
}
