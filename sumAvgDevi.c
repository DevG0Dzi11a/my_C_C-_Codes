#include<stdio.h>
#include<math.h>

int sum(int n1,int n2,int n3,int n4,int n5)
{
    int sum =n1+n2+n3+n4+n5;
    return sum;
}

float avg(int s)
{

    float av = (float)s/5;
    return av;

}
float deviation(int n1,int n2,int n3,int n4,int n5, float a)
{
    float d= (float)(pow((n1-a), 2)+pow((n2-a), 2)+pow((n3-a), 2)+pow((n4-a), 2)+pow((n5-a), 2));

    float e=d/5;
    float deviation = sqrt(e);
    return deviation;
}

int main()
{
    int n1, n2, n3, n4, n5, s;
    float d, a;
    printf("Enter 5 integer numbers = ");
    scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);

    s = sum(n1, n2, n3, n4, n5);
    printf("Sum = %d\n", s);

    a = avg(s);
    printf("Average = %.2f\n", a);

    d = deviation(n1, n2, n3, n4, n5,a);
    printf("Standard Deviation = %f", d);
    return 0;
}
