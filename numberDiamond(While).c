#include<stdio.h>

void main()
{
    int i, j, n, a=1,k;
    printf("Enter n = ");
    scanf("%d", &n);

    i=1;
    while(i<=n)
    {
        k=1;
        j=1;
        while(j<=n-i)
        {
            printf(" ");
            j++;
        }
        j=1;
        while(j<=2*i-1)
        {
            printf("%d", k);
            if(j==1 ||j<i)
                k++;
            else
                k--;
            j++;
        }
        printf("\n");
        i++;
    }

    i=n-1;

    while(i>=1)
    {
        k=1;
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
            printf("%d", k);
            if(j==1 || j<i)
                k++;
            else
                k--;
            j++;
        }
        printf("\n");
        i--;

    }
}
