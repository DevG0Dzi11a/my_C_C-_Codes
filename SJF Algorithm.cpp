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

void SJF(priority_queue<pr2, vector<pr2>, compare> pq, int numProcess)
{
    priority_queue<pr2, vector<pr2>, compare> nextProcess;// on this queue the first.second value is arrival time(swapped)
    priority_queue< pair<int, pr>, vector<pair<int, pr>>, compare2> result;
    int timer = 0;
    int waiting_T[numProcess+1], arrival_T[numProcess+1], cpu_T[numProcess+1], turnaround_T[numProcess+1],p_id[numProcess+1], i=1;
    waiting_T[0] = 0;
    waiting_T[1] = 0;
    cpu_T[0] = 0;
    turnaround_T[0] = 0;

    nextProcess.push(make_pair(make_pair(pq.top().first.first, pq.top().second.first), make_pair(pq.top().first.second, pq.top().second.second)));
    pq.pop();
    while(!nextProcess.empty())
    {
        for(int i = 0; i <= nextProcess.top().second.first; i++)
        {
            if(timer == pq.top().second.first && i!=0)
            {
                nextProcess.push(make_pair(make_pair(pq.top().first.first, pq.top().second.first), make_pair(pq.top().first.second, pq.top().second.second)));
                pq.pop();
            }
            timer++;
        }
        cpu_T[i] = nextProcess.top().second.first;
        arrival_T[i] = nextProcess.top().first.second;
        p_id[i] = nextProcess.top().first.first;
        waiting_T[i] = abs((cpu_T[i-1] + waiting_T[i-1]) - arrival_T[i]);
        turnaround_T[i] = waiting_T[i] + cpu_T[i];
        result.push(make_pair(p_id[i], make_pair(waiting_T[i], turnaround_T[i])));
        i++;
        nextProcess.pop();
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
    SJF(processes, numProcess);
    return 0;
}
