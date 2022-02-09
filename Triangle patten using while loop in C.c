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

}
