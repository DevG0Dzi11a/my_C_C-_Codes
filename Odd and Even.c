#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num;
    printf("Enter a number = ");
    scanf("%d", &num);


        if(num % 2 == 1)
            printf("odd");
        else
            printf("even");


    return 0;
}
