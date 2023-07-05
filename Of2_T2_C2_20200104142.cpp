#include<iostream>
using namespace std;

int main()
{
    int arr[]= {5, 11, 25, 1, 36, 99, 54};
    int minimum, minInd;
    for(int i = 0; i < (sizeof(arr)/ sizeof(arr[0]))-1; i++)
    {
        minimum = arr[i];
        for(int j = i+1; j<sizeof(arr)/ sizeof(arr[0]); j++)
        {
            if(minimum>arr[j])
            {
                minimum = arr[j];
                minInd = j;
            }
        }
        if(minimum != arr[i])
        {
            int temp = arr[i];
            arr[i] = arr[minInd];
            arr[minInd] = temp;
        }
    }
    for(int i = 0; i < sizeof(arr)/ sizeof(arr[0]); i++)
        cout<<arr[i]<<" ";
    return 0;
}

