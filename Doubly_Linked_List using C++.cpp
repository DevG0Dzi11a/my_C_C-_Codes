#include <bits/stdc++.h>
using namespace std;

struct node
{
    node* prev;
    int val;
    node* next;

    node(int x)
    {
        prev = NULL;
        val = x;
        next = NULL;
    }
};
node *head;


void INSERT_F(int x)
{
    node *n = new node(x);

    if(head == NULL)
    {
        head = n;
        return;
    }
    n->next = head;
    head->prev = n;
    head = n;
}
void INSERT_N(int x, int p)
{
    node *n = new node(x);
    node* temp = head, *temp2;
    while(p!=2)
    {
        temp = temp->next;
        p--;
    }
    temp2 = n->next = temp->next;
    n->prev = temp;
    temp2->prev = n;
    temp->next = n;
}

void INSERT_L(int x)
{
    node *n = new node(x);
    if(head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;

}

void DELETE_F()
{
    node *temp = head->next;
    if(head != NULL)
    {
        head = head->next;
        temp->prev = NULL;
    }
}

void DELETE_N(int x)
{
    node *temp = head, *temp2;

    while(x!=2)
    {
        temp = temp->next;
        x--;
    }
    temp2 = temp->next->next;
    temp->next = temp2;
    temp2->prev = temp;
}
void DELETE_L()
{
    node *temp = head;

    while(temp->next->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = NULL;
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
void PRINT_REV()
{
    node *temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    while(temp != NULL)
    {
        cout<<temp->val<<"\t";
        temp = temp->prev;
    }
    cout<<endl;
}


int main()
{
    head = NULL;
    int x,n;

    while(true)
    {
        printf("1. Insert First\n2. Insert N\n3. Insert Last\n");
        printf("4. Delete First\n5. Delete N\n6. Delete Last\n");
        printf("7. Print\n8. Reverse Print\n9. Search\n");
        printf("10. Exit\n");
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
            PRINT_REV();
            break;
        case 9:
            printf("\n Enter value: ");
            scanf("%d",&x);
            printf("Value found at position: %d\n-",SEARCH(x));
            break;
        case 10:
            return 0;
            break;
        default:
            continue;
        }
    }

    return 0;
}

