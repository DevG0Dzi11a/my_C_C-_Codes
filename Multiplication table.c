#include <stdio.h>


int main()
{
    int n, r, j, i, m;


    printf("Enter n : ");
    scanf("%d", &n);
    printf("Enter r : ");
    scanf("%d", &r);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=r; j++)
        {
            m = i*j;
            printf("%d x %2d = %4d", i, j, m);
            printf("\n");

        }
        printf("\n");
    }


    return 0;
}
