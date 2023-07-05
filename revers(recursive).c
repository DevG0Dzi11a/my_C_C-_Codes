#include<stdio.h>


int s=0,a;
reverse(int n)
{
    if(n)
    {
        a=n%10;
        s=s*10+a;
        reverse(n/10);
    }
    else
        return s;
    return s;
}

int main()
{
    int n;
    scanf("%d",&n);

    printf("%d",reverse(n));
    return 0;
}

