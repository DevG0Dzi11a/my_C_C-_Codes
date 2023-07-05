#include <bits/stdc++.h>
using namespace std;


struct node
{
    int val;
    node* next;

    node(int x)
    {
        val = x;
        next = NULL;
    }
};
node* head;

void INSERT(int x)
{
    node *n = new node(x);
    if(head == NULL)
    {
        head = n;
    }

    else
    {
        node *temp= head;
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = n;
    }
}


void PRINT()
{
    node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->val<<"\t";
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{
    head = NULL;
    INSERT(5);
    INSERT(6);
    INSERT(7);
    INSERT(8);
    PRINT();

    return 0;
}
