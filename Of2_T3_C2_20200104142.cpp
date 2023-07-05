#include<iostream>
using namespace std;

int main()
{
    int arr[]= {5, 1, 25, 11, 36, 99, 54};

    int i, j, temp;
    int n = sizeof(arr)/ sizeof(arr[0]);
    for (i = 1; i < n; i++)
    {
        temp = arr[i];
        j = i - 1;

        while(j>=0 && temp < arr[j])
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
    for(int i = 0; i < sizeof(arr)/ sizeof(arr[0]); i++)
        cout<<arr[i]<<" ";
    return 0;
}

