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
node* head, *head2;

void INSERT_L(int x)
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

void SWAP(node *n1, node *n2)
{
    node *temp;

    temp->val = n1->val;
    n1->val = n2->val;
    n2->val = temp->val;

}

int main()
{
    head = NULL;
    head2 = NULL;
    int arr[]= {2,6,5,4,3,7,9,24,11,8};
    for(int i = 0; i<10; i++)
    {
        INSERT_L(arr[i]);
    }
    SWAP(head, head->next);
    PRINT();

    return 0;
}
