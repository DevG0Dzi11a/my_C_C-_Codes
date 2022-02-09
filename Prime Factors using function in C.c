#include <stdio.h>

void primeFactors(int num)
{
    int i=2, j;
    printf("Prime Factors :");
    while(num!=1)
    {
        if(num%i==0)
        {
            while(num%i==0)
            {
                printf("%d ", i);
                num/=i;
            }


        }
        i++;
    }
}

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    primeFactors(n);

    return 0;
}
