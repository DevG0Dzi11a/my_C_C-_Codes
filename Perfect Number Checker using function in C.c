#include<stdio.h>
int perfectNumber(int n)
{
    int a=0, i;
    for(i=1; i<n; i++)
    {
        if(n%i==0)
            a=a+i;
    }
    return a;
}

void main()
{
    int n, res;
    printf("Enter n : ");
    scanf("%d", &n);


    res= perfectNumber(n);

    if(res==n)
        printf("This is a perfect number");
    else
        printf("This is not a perfect number");

}
