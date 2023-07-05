#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int>pr;
vector<pr>init;

void INITIALIZE_SINGLE_SOURCE(vector<pr> &graph[], int source, int nodes)
{
    for(int i=0; i<nodes; i++)
    {
        if(i ==  source)
        {
            init[i].first = 0;
            init[i].second = -1;

        }
        else
        {
            init[i].first = 999;
            init[i].second = -1;
        }
        cout<<init[i].first<<" "<<init[i].first<<endl;
    }
}
int main()
{
    int nodes, edges, node_begin, node_end, weight;
    cout<<"Enter nodes :";
    cin>>nodes;
    cout<<"Enter Edges :";
    cin>>edges;

    vector <pr> graph[nodes];

    for(int i = 0; i<edges; i++)
    {
        cin>>node_begin>>node_end>>weight;

        graph[node_begin].push_back(make_pair(node_end, weight));
    }
    for(int i=0; i<nodes; i++)//printing
    {
        cout<<"Node "<<i<<" Connected to: ";
        if(graph[i].size()==0)
            cout<<"None";
        for(int j=0; j<graph[i].size(); j++)
        {
            cout<<graph[i][j].first<<"/"<<graph[i][j].second<<"     ";
        }
        cout<<endl;
    }
    INITIALIZE_SINGLE_SOURCE(graph, 0, nodes);


    return 0;
}
