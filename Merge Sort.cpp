#include <bits/stdc++.h>
#include<vector>
using namespace std;


void MERGE(int arr[], int p, int q, int r)
{
    int n1 = q - p + 1, n2 = r - q;
    int left[n1], right[n2];

    for(int i=0; i<n1; i++)
    {
        left[i] = arr[p+i];
    }
    for(int i=0; i<n2; i++)
    {
        right[i] = arr[q+i+1];
    }
    left[n1]=1000;
    right[n2]=1000;

    int f1 = 0, f2 = 0;

    for(int i=p; i<=r; i++)
    {
        if(left[f1]<=right[f2])
        {
            arr[i] = left[f1];
            f1++;
        }
        else
        {
            arr[i] = right[f2];
            f2++;
        }
    }

}

void MERGESORT(int arr[], int p, int r)
{
    int q;
    if(p<r)
    {

        q = (p+r)/2;
        MERGESORT(arr, p, q);
        MERGESORT(arr, q+1, r);
        MERGE(arr, p, q, r);
    }
}
int main()
{
    int arr[10];
    for(int i=0; i<10; i++) arr[i] = (rand()%100);
    MERGESORT(arr, 0, 9);

    for(int i=0; i<10; i++)cout<<arr[i]<<"\t";

    return 0;
}
