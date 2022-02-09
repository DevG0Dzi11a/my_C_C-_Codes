#include<stdio.h>

int digit_count(int n)
{
    static int c=0;

    if(n==0)
        return c;
    else
    {
        c++;
        return digit_count(n/10);
    }
}


void main()
{
    int n,digit;

    printf("Enter A digit:");
    scanf("%d", &digit);
    n=digit_count(digit);
    printf("Total number of Digit:%d",n);

    return 0;
}
