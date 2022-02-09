#include<stdio.h>
int addition(int, int);
int subtraction(int, int);
int multiplication(int, int);
float div(int, int);


int main()
{
    system("COLOR 0A");
    int a, b, c, result;
    printf("Enter two value : ");
    scanf("%d%d", &a, &b);
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\nChoice :");
    scanf("%d", &c);

    if( c == 1)
        printf("Result : %d",addition(a, b) );
    else if(c == 2)
        printf("Result : %d",subtraction(a, b));
    else if(c == 3)
        printf("Result : %d", multiplication(a, b));
    else if(c == 4)
        printf("Result : %.2f",div(a, b) );
    else
        printf(" invalid Input");


    return 0;


}
int addition(int a, int b)
{
    int result = a + b;
    return result;
}
int subtraction(int a, int b)
{
    int result = a - b;
    return result;
}
int multiplication(int a, int b)
{
    int result = a * b;
    return result;
}
float div(int a, int b)
{
    float result =(float) a / (float)b;
    return result;
}
