#include<stdio.h>

int main()
{
    int i, n, sum =0, t1, t2 = -1;
    printf("Enter n : ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        t1 = i;
        if(i%2 == 0)
            t1 = i*t2;
        sum = sum +t1;
   }
    printf(" Sum = %d", sum);
    return 0;

}
