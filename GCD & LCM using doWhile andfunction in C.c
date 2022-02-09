#include<stdio.h>


int greater(int a, int b, int c)
{
    int i=1, greater;
    do
    {
        if(a%i==0 && b%i==0 && c%i ==0)
            greater= i;
        i++;
    }
    while(i<=a && i<=b && i<=c);

    return greater;
}

int least(int x, int y, int z)
{
    int lcm, max, i;

    max= (x>y && x>z) ? x : (y>z) ? y : z;
    i=max;
    do
    {
        if(i%x==0 && i%y==0 && i%z==0)
        {
            lcm=i;
            break;
        }
        i++;

    }while(1);
    return lcm;
}

void main()
{
    int n1, n2, n3;
    printf("Enter three integers : ");
    scanf("%d %d %d", &n1, &n2, &n3);


    printf("GCD = %d\nLCM = %d", greater(n1, n2, n3),least(n1, n2, n3));
}
