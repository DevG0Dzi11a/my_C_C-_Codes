#include<stdio.h>

void main()
{
    int i, j, n, a=1;
    printf("Enter n = ");
    scanf("%d", &n);

    i=1;
    while(i<=n)
    {
        j=1;
        while(j<=n-i)
        {
            printf(" ");
            j++;
        }
        j=1;
        while(j<=2*i-1)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }

    /*i=n-1;

    while(i>=1)
    {
        j=1;
        while(j<=a)
        {
            printf(" ");
            j++;
        }
        a++;
        j=1;
        while(j<=2*i-1)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i--;

    }*/
}
