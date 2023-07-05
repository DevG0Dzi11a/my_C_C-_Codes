#include <bits/stdc++.h>
using namespace std;

int graph[200][200];
int status[200];

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

void push(int x)
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
int pop()
{
    int ret;
    node *temp = head;

    if(temp->next!=NULL)
    {
        while(temp->next->next!= NULL)
        {
            temp = temp->next;
        }

        ret= temp->next->val;
        temp->next=NULL;
    }
    else
    {
        ret=head->val;
        head= NULL;
    }

    return ret;
}

bool isEmpty()
{
    if(head==NULL)
    {
        return true;
    }
    else
        return false;
}

void inputGraph(int N, int E)
{
    int a, b;
    for(int i=1; i<=E; i++)
    {
        scanf("%d%d", &a, &b);
        graph[a][b] = 1;
    }
}
void printAM(int N)
{
    for(int i=1; i<=N; i++)
    {
        for(int j=1; j<=N; j++)
        {
            printf(" %d ",graph[i][j]);
        }
        printf("\n");
    }
}

void initStatus(int N)
{
    for(int i=1; i<=N; i++)
    {
        status[i] =1;
    }
}

void addNeighbors(int nodeN, int n)
{
    for(int i=1; i<=n; i++)
    {
        if(graph[nodeN][i] == 1 && status[i] == 1)
        {
            push(i);
            status[i] = 2;
        }
    }

}

void dfs(int source, int n)
{
    //step 1
    initStatus(n);

    //step 2
    push(source);
    status[source] = 2;

    //step 3
    while(!isEmpty())
    {
        //step 4
        int nodeN;  //do necessary things
        nodeN = pop();
        cout<<nodeN;
        status[nodeN] = 3;



        //step 5
        addNeighbors(nodeN,n);

    }
}

int main()
{
    int n, e, source;
    printf("Enter no of Node: ");
    scanf("%d",&n);

    printf("Enter no of Edge: ");
    scanf("%d", &e);

    printf("Enter Source: ");
    scanf("%d", &source);
    inputGraph(n,e);
    printAM(n);
    dfs(source,n);

    return 0;
}

