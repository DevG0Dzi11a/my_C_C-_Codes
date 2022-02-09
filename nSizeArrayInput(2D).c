#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int i, j,r, c;
    printf("Enter row and column :\n");
    scanf("%d%d", &r, &c);
    int ary[r][c];
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
            printf("%d ", ary[i][j]);
        }
        printf("\n");
    }
    return 0;
}
