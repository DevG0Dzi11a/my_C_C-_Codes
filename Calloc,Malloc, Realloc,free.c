#include <stdio.h>
#include<stdlib.h>

int main()
{
    int *ptrc, *ptrm, n, i;
    printf("Array Length :");
    scanf("%d", &n);
    // Array declaration using Malloc And Calloc
    ptrm= (int*) malloc (n * sizeof(int));
    ptrc= (int*) calloc (n, sizeof(int));

    //Taking input for Malloc
    printf("Enter the Elements of M-Alloc :");
    for(i=0; i<n; i++)
    {
        scanf("%d", &ptrm[i]);
    }


    //printing Malloc
    for(i=0; i<n; i++)
    {
        printf("%d\t", ptrm[i]);
    }
    printf("\n");


    //Reallocating Malloc
    ptrm= realloc(ptrm , 10 *sizeof(int));


    //Taking input for reallocated memory of Malloc
    printf("Enter the reallocated memory Elements :");
    for(i=n; i<2*n; i++)
    {
        scanf("%d", &ptrm[i]);
    }


    //printing reallocated Malloc
    for(i=0; i<2*n; i++)
    {
        printf("%d\t", ptrm[i]);
    }
    printf("\n");


    //printing Calloc
    for(i=0; i<n; i++)
    {
        printf("%d\t", ptrc[i]);
    }
    printf("\n");

    //release the memory of  Calloc and Malloc
    free(ptrc);
    free(ptrm);
    return 0;
}
