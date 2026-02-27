#include<iostream>
using namespace std;
int count=0;
void TowerHonoi(int start,int end,char source,char aux,char dest) 
{
    if(start>end) 
        return;
    TowerHonoi(start,end-1,source,dest,aux);
    cout<<"Move disk "<<end<<" from "<<source<<" to "<<dest<<endl;
    count++;
    TowerHonoi(start,end-1,aux,source,dest);
}
int main()
{
    int disk;
    cout<<"Enter the no .of disk:: ";
    cin>>disk;    
    TowerHonoi(1,disk,'A','B','C');
    cout<<"Total moves :: "<<count;
return 0;
}