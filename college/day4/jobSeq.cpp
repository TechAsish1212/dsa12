#include<iostream>
#include<algorithm>
using namespace std;

struct job{
    int id;
    int deadline;
    int profit;
};
    
bool compare(job a,job b)
{
    return a.profit > b.profit;
}

void jobSeq(job jobs[],int n)
{
    sort(jobs, jobs + n, compare);

    int dmax=0;

    for(int i=0;i<n;i++)
    {
        if(jobs[i].deadline > dmax)
            dmax = jobs[i].deadline;
    }


    int timeslot[dmax+1];
    for(int i=0;i<=dmax;i++)
        timeslot[i] =-1;


    int total_profit = 0, job_count = 0;

    for (int i=0;i<=dmax;i++)
    {
        int k = min(dmax, jobs[i].deadline); 
        while(k>=1)
        {
            if(timeslot[k]==-1)
            {
                timeslot[k]=jobs[i].id;
                total_profit +=jobs[i].profit;
                job_count++;
                break;
            }
            k--;
        }
    }

    cout<<"\n Scheduled jobs : ";
    for(int i=1;i<=dmax;i++)
    {
        if(timeslot[i]!=-1)
            cout<<"J"<<timeslot[i]<<" ";
    }
    cout<<"\n Total Profit :: "<<total_profit<<endl;
}


int main()
{
    int n;
    cout<<"Enter the number of jobs :: ";
    cin>>n;

    job jobs[n];

    cout<<"Enter the job Id,Deadline , and Profit for each job \n";
    for(int i=0;i<n;i++)
    {
        cout<<"job "<<i+1<<": ";
        cin>>jobs[i].id>>jobs[i].deadline>>jobs[i].profit;
    }

    jobSeq(jobs,n);
return 0;
}