#include<iostream>
using namespace std;

int main()
{
    int n, temp;
    cout <<  "Enter Array Size:";
    cin>>n;
    int arr[n];
    int key;
    int arrSize = sizeof(arr)/ sizeof(arr[0]);
    cout<<"Enter Array Elements:";
    for(int i=0; i<arrSize; i++)
        cin>>arr[i];
label:
    cout<<"Enter the number to find: ";
    cin>>key;
    for(int i=0; i<arrSize; i++)
    {
        for(int j=i+1; j<arrSize; j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int low = 0, high = arrSize, mid;
    bool found =false;
    while(low<=high)
    {
        mid = (low+high)/2;
        if(arr[mid] == key)
        {
            cout<<"Found!"<<endl;
            found = true;
            break;
        }
        else if(arr[mid]>key)
        {
            high = mid - 1;
        }
        else if(arr[mid]<key)
        {
            low = mid+1;
        }
    }
    if(found == false)
    {
        cout<<"Not Found!"<<endl;
    }
    goto label;

    return 0;
}
