#include <stdio.h>


void compare_double(double a, double b)
{
    int x = (int)a, y = (int)b, m=0, n=0;
    float p = (a-x), q = (b-y);
    while(p!=((int)p))
    {
        m++;
        p=p*10;
    }
    while(q!=((int)q))
    {
        n++;
        q=q*10;
    }

    int u = p, v = q;
    if(x==y && u==v)
    {
        printf("Same\n");
    }
    else
    {
        printf("Not same\n");
    }
}

int main ()
{
    compare_double(5.00, 5.00);
    return 0;
}
