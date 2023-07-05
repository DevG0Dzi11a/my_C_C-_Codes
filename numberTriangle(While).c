#include<stdio.h>

void main()
{
    int i,j, n,a;
    printf("Enter n = ");
    scanf("%d", &n);

    i=1;
    while(i<=n)
    {
        a=1;
        j=1;
        while(j<=n-i)
        {
            printf(" ");
            j++;
        }
        j=1;
        while(j<=2*i-1)
        {
            printf("%d", a);
            if(j<i)
                a++;
            else
                a--;

            j++;
        }
        printf("\n");
        i++;
    }

}

