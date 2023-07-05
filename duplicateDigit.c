#include <stdio.h>


int main()
{
    int num, i, j, a,n, flag=0;


    // taking input
    printf("Enter the number :");
    scanf("%d", &num);
    printf("Enter digits :");
    scanf("%d", &n);


    int ar[n];
    for(i=0; i<n; i++)
    {
        ar[i] = num%10;
        num=num/10;
    }

    for(i=0;i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(ar[i]==ar[j])
            flag=1;

        }
    }
    if(flag==1)
    printf("Duplicate digit available");
    else
        printf("No duplicate digits");

    return 0;

}
