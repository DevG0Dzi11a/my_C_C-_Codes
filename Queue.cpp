#include<bits/stdc++.h>
using namespace std;


struct node
{
    int x;
    node *next;

    node(int a)
    {
        x = a;
        next = NULL;
    }
};
node *head;


void ENQUEUE(int x)
{
    node *n =  new node(x);

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
}

void DEQUEUE()
{
    node *temp = head->next;
    if(head != NULL)
    {
        head = head->next;
    }
}
void PRINT()
{
    node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->x<<"\t";
        temp = temp->next;
    }
    cout<<endl;
}

bool isEmpty()
{
    if(head == NULL)
        return true;
    else
        return false;
}

int main()
{
    head = NULL;
    int n, num;

    while(true)
    {
        printf("1. Enquque\n");
        printf("2. Dequeue\n");
        printf("3. Print\n");
        printf("4. Is the list empty?\n");
        printf("5. Exit\n");
        scanf("%d", &n);

        switch(n)
        {
        case 1:
            printf("Enter a value :");
            scanf("%d", &num);
            ENQUEUE(num);
            num = 0;
            break;
        case 2:
            DEQUEUE();
            break;
        case 3:
            PRINT();
            break;
        case 4:
            if(isEmpty() == true)
                printf("Yes!\n");
            else
                printf("No!\n");
            break;
        case 5:
            return 0;
        default:
            continue;
        }
    }

    return 0;
}

