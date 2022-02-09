#include<stdio.h>

float product(float a, int b);

void main()
{
    float a;
    int b;
    printf("Enter a float and an integer value : ");
    scanf("%f%d", &a, &b);

    printf("Product = %.3f", product(a,b));

}

float product(float a, int b)
{
    float pro = a*(float)b;

    return pro;

}
