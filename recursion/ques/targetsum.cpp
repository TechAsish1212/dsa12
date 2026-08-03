#include <iostream>
#include<vector>
using namespace std;

bool solve(int idx,int target,vector<int>&arr){
    // base 
    if(target==0){
        return true;
    }

    if(idx==arr.size()||target<0){
        return false;
    }
    
    // include
    if(solve(idx+1,target-arr[idx],arr)) return true;

    // exclude
    if(solve(idx+1,target,arr)) return true;

    return false;
}

int main()
{
    vector<int>arr={3,6,4,5};
    int target=21;
    if(solve(0,target,arr)){
        cout<<"Exists"<<endl;
    }
    else{
        cout<<"does not exist"<<endl;
    }

    return 0;
}