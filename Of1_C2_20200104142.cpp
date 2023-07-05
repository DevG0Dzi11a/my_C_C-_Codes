#include<iostream>
using namespace std;

int main()
{
    int arr[] = {10, 16, 25, 36, 48, 55, 67, 87, 89, 95};
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    int input;
    cout<<"Enter a number :"<<endl;
    cin>>input;
    int low = 0, high = arrSize-1, mid;
    bool notFound = true;

    while(low<=high)
    {
        mid = (low+high)/2;
        if(arr[mid] == input)
        {
            cout<<"Found!"<<endl;
            notFound = false;
            break;
        }
        else if(input > arr[mid])
        {
            low = mid + 1;
        }
        else if(input < arr[mid])
        {
            high = mid - 1;
        }
    }
    if(notFound == true)
    {
        cout<<"Not Found!"<<endl;
    }
    return 0;
}
