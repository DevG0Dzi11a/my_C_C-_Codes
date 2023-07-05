#include<bits/stdc++.h>
using namespace std;

typedef pair<int, int> pr;
typedef pair<pr, pr> pr2;
//priority queue structure < <id, cpuTime> , < arrivalTime, turnaroundTime> >

struct compare
{
    bool operator()(pair<pr, pr> a, pair<pr, pr>b)
    {
        return a.second.first > b.second.first;
    }
};
struct compare2
{
    bool operator()(pair<int, pr> a, pair<int, pr>b)
    {
        return a.first > b.first;
    }
};

void printPriorityQueue(priority_queue<pr2, vector<pr2>, compare> pq, int numProcess)
{
    for(int i = 0; i < numProcess; i++)
    {
        cout<<"Process id :"<<pq.top().first.first<<"  CPU Time :"<<pq.top().first.second<<"   Arrival Time :"<<pq.top().second.first<<"   Turnaround Time :"<<pq.top().second.second;
        pq.pop();
        cout<<endl<<endl<<endl;
    }
}

void FCFS(priority_queue<pr2, vector<pr2>, compare>pq,int numProcess)
{
    int waiting_T[numProcess+1], arrival_T[numProcess+1], cpu_T[numProcess+1], turnaround_T[numProcess+1],p_id[numProcess+1], i=1;

    priority_queue< pair<int, pr>, vector<pair<int, pr>>, compare2> result; //id, waiting time, turnaround time

    waiting_T[0] = 0;
    waiting_T[1] = 0;
    cpu_T[0] = 0;
    turnaround_T[0] = 0;

    while(!pq.empty())
    {
        cpu_T[i] = pq.top().first.second;
        arrival_T[i] = pq.top().second.first;
        p_id[i] = pq.top().first.first;
        waiting_T[i] = abs((cpu_T[i-1] + waiting_T[i-1]) - arrival_T[i]);
        turnaround_T[i] = waiting_T[i] + cpu_T[i];
        result.push(make_pair(p_id[i], make_pair(waiting_T[i], turnaround_T[i])));
        pq.pop();
        i++;
    }
    double total_tt = 0, total_wt = 0;
    for(int i=1; i<=numProcess; i++)
    {
        cout<<"Process id :"<<result.top().first<<" Waiting time: "<<result.top().second.first<<" Turnaround Time :"<<result.top().second.second<<endl;
        total_tt = total_tt + result.top().second.second;
        total_wt = total_wt + result.top().second.first;

        result.pop();
    }
    cout<<"Average waiting time :"<< (float)(total_wt/numProcess)<<endl<<"Average turnaround time :"<<(float)(total_tt/numProcess)<<endl;
}

int main()
{
    int numProcess, temp1, temp2;
    priority_queue<pr2, vector<pr2>, compare> processes;


    cout<<"Enter number of processes :";
    cin>>numProcess;

    cout<<"Enter the CPU times and Arrival times of the processes :"<<endl;
    for(int i = 0; i < numProcess; i++)
    {
        cin>>temp1>>temp2;
        processes.push(make_pair(make_pair(i+1, temp1), make_pair(temp2, 0)));
    }

    printPriorityQueue(processes, numProcess);

    FCFS(processes, numProcess);
    cout<<endl<<"Gantt Chart :"<<endl<<endl;
    int temp=0;
    int p[numProcess];
    for(int i = 0; i < numProcess; i++)
    {
        cout<<"|----------------";
    }
    cout<<"-|"<<endl;
    for(int i = 0; i <numProcess; i++)
    {
        cout<<temp<<"       "<<"P"<<processes.top().first.first<<"       ";
        temp = temp + processes.top().first.second;
        processes.pop();
    }
    cout<<temp;

    return 0;
}
