#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, t;


    cin>>t;
    while(t--)
    {

        int counter = 0;
        cin>>n;
        int temp = 25;
        for(int i=1; temp<n; i++){
            counter++;
            temp = temp * 5;

        }
        cout<<counter<<endl;
    }
    return 0;
}
