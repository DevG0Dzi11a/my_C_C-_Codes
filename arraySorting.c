#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp;
    temp= *b;
    *b= *a;
    *a= temp;
}

int main()
{
    int n , i, j;
    printf("Enter Array Length :\n");
    scanf("%d", &n);
    int ary[n];
    printf("Enter the array :\n");

    for(i=0; i<n; i++)
    {
        scanf("%d", &ary[i]);
    }

    for(i=0; i<n; i++)
    {
        for (j=i+1; j<n;j++)
        {
            if(ary[i]>ary[j])
                swap(&ary[i], &ary[j]);

        }
    }
    for(i=0; i<n; i++)
    {
       printf("%d ", ary[i]);
    }
    printf("\n");


    return 0;
}
