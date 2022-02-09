#include<stdio.h>

void main()
{
    int i, j, n, a,k;
    printf("Enter n = ");
    scanf("%d", &n);

    i=1;
    do
    {
        j=1;
        do
        {
            if(j>1)
                printf(" ");
            j++;
        }
        while(j<=(n+1)-i);

        j=1;
        do
        {
            if(j==1 || j<=2*i-1)
                printf("*");
            j++;
        }
        while(j<=2*i-1);
        printf("\n");
        i++;
    }
    while(i<=n);


    k=n-1;
    a=1;
    do
    {
        j=1;
        do
        {
            printf(" ");
            a++;
            j++;

        }
        while(j<=n-k);
        j=1;
        do
        {
            if(j==1 || j<=2*k-1)
                printf("*");
            j++;
        }while(j<=2*k-1);
        printf("\n");
        k--;
    }
    while(k>=1);

}
