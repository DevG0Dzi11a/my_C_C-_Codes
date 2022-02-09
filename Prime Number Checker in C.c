#include<stdio.h>

void main()
{

    int i, n, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(i=2; i<n; i++)
    {
        if(n%i == 0)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
        printf("%d is not Prime", n);
    else
        printf("%d is prime", n);

}
