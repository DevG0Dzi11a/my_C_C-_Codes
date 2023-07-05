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

void INSERT_F(int x)
{
    node *n =  new node(x);
    head = n;
}
void INSERT_N(int x, int N)
{
    node *n  = new node(x);

    node *temp = head;
    for(int i =1; i<N-1; i++)
    {
        temp = temp->next;
    }
    n->next = temp->next;
    temp->next = n;
}
void INSERT_L(int x)
{
    node *n = new node(x);
    node *temp= head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void DELETE_F()
{
    head = head->next;
}
void DELETE_L()
{
    node *temp = head;

    while(temp->next->next!= NULL)
    {
        temp = temp->next;
    }
    temp->next=NULL;
}
void DELETE_N(int N)
{
    node *temp = head;
    for(int i=1; i<N-1; i++)
    {
        temp = temp->next;
    }
    temp->next = temp->next->next;
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
int SEARCH(int x)
{
    int pos=1;
    node *temp = head;
    while(temp!=NULL)
    {
        if(x == temp->val)
        {
            return pos;
        }
        temp = temp->next;
        pos++;
    }
    return -1;
}
int main()
{
    head = NULL;
    int x,n;

    while(true)
    {
        printf("1. Insert First\n2. Insert N\n3. Insert Last\n");
        printf("4. Delete First\n5. Delete N\n6. Delete Last\n");
        printf("7. Print\n8. Search\n");
        printf("9. Exit\n");
        printf("Enter Choice: ");
        int ch;
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
            printf("\n Enter value: ");
            scanf("%d",&x);
            INSERT_F(x);
            break;
        case 2:
            printf("\n Enter value, position: ");
            scanf("%d%d",&x,&n);
            INSERT_N(x,n);
            break;
        case 3:
            printf("\n Enter value: ");
            scanf("%d",&x);
            INSERT_L(x);
            break;
        case 4:
            DELETE_F();
            break;
        case 5:
            printf("\n Enter position: ");
            scanf("%d",&n);
            DELETE_N(n);
            break;
        case 6:
            DELETE_L();
            break;
        case 7:
            PRINT();
            break;
        case 8:
            printf("\n Enter value: ");
            scanf("%d",&x);
            printf("Value found at position: %d\n",SEARCH(x));
            break;
        case 9:
            return 0;
            break;
        default:
            continue;
        }
    }

    return 0;
}
