#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int i, j,r, c;
    printf("Enter row and column :\n");
    scanf("%d%d", &r, &c);
    int ary[r][c];
    int ary2[r][c];
    printf("Enter Elements :\n");


    for(i=0; i<r; i++)
    {

        for(j=0; j<c; j++)
        {
            scanf("%d", &ary[i][j]);
        }

    }

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            ary2[i][j]=ary[i][j];
        }
    }

    //Transpose matrix

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            ary[j][i]=ary2[i][j];
        }
    }

    printf("Transpose Matix is : \n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ", ary[i][j]);
        }
        printf("\n");
    }

    return 0;
}




/*  1 2 3
    4 5 6
    7 8 9


  1 4 7
  2 5 8
  3 6 9*/
