#include <stdio.h>
#include<stdlib.h>

int main()
{
    int *ptrc, *ptrm, n, i, pos;
    printf("Array Length :");
    scanf("%d", &n);
    // Array declaration using Malloc And Calloc
    ptrm= (int*) malloc (n * sizeof(int));

    //Taking input for Malloc
    printf("Enter the Elements of Malloc :");
    for(i=0; i<n; i++)
    {
        scanf("%d", &ptrm[i]);
    }
    printf("\n");

    //printing Malloc
    printf("Your array is ");
    for(i=0; i<n; i++)
    {
        printf("%d ", ptrm[i]);
    }
    printf("\n");


    printf("Enter the element position to delete :");
    scanf("%d", &pos);

    for(i= pos-1; i<n; i++)
    {
        ptrm[i]= ptrm[i+1];
    }

    printf("After deleting your array is :");


    for(i=0; i<n-1; i++)
    {
        printf("%d ", ptrm[i]);
    }


    return 0;
}
