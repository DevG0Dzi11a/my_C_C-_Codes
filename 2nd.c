#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter m & n : ");
    scanf("%d %d",&n,&m);
    int A[n],B[m];
    printf("A = ");
    for(int i=0;i<n;i++)
        scanf("%d",&A[i]);
        printf("B = ");
    for(int i=0;i<m;i++)
        scanf("%d",&B[i]);
    int C[n];
    int k=0;
    printf("A-B = ");
    for(int i=0;i<m;i++)
    {
        int X=0;
        for(int j=0;j<m;j++)
            if(A[i]==B[j])
            X=1;
        if(!X)
        {
            C[k]=A[i];
            k++;
        }
    }
    if(k==0) printf("-1");
    else
    {
        for(int i=0;i<k;i++)
            printf("%d \t",C[i]);
    }
    return 0;
}
