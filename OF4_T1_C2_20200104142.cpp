#include <bits/stdc++.h>
using namespace std;

struct sInfo
{
    int ID;
    double sub1;
    double sub2;
    double avg;
} st[5];

int main()
{
    sInfo temp;
    for(int i=0; i<5; i++)
    {
        cout<<"Enter ID: ";
        cin>> st[i].ID;
        cout<<"Enter Marks-1: ";
        cin>> st[i].sub1;
        cout<<"Enter Marks-2: ";
        cin>> st[i].sub2;
        st[i].avg = (st[i].sub1 + st[i].sub2)/2.00;
    }

    cout<< "ID" <<"    Marks-1"<<  "  Marks-2"<<endl;
    for(int i=0; i<5; i++)
    {
        cout<< st[i].ID <<"\t"<< st[i].sub1<<"\t"<<st[i].sub2<<endl;
    }
    for(int i=0; i<5; i++)
    {
        for(int j=i+1; j<5; j++)
        {
            if(st[i].avg < st[j].avg)
            {
                temp = st[i];
                st[i] = st[j];
                st[j] = temp;
            }
        }
    }
    cout<<"\n\n";
    cout << "Sorted by Average"<<endl;
    cout << "_________________"<<endl;
    cout<< "ID" <<"    Marks-1"<<  "  Marks-2"<< "  Average" <<endl;
    for(int i=0; i<5; i++)
    {
        cout<< st[i].ID <<"\t"<< st[i].sub1<<"\t"<<st[i].sub2<<"\t "<<st[i].avg<<endl;
    }
    return 0;
}
