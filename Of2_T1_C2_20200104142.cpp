#include<iostream>
using namespace std;

int main()
{
    int arr[]= {3,7,10,15,2,99,12};
    for(int i = 0; i<sizeof(arr)/ sizeof(arr[0]); i++)
    {
        for(int j = i+1 ; j<sizeof(arr)/ sizeof(arr[0]); j++)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i = 0; i < sizeof(arr)/ sizeof(arr[0]); i++)
        cout<<arr[i]<<" ";
    return 0;
}
