#include<iostream>
#include<vector>

using namespace std;

bool isSorted(vector<int>arr,int n){
    if(n==arr.size()-1){
        return true;
    }

    if(arr[n]>arr[n+1]){
        return false;
    }

    return isSorted(arr,n+1);
}

int main(){

    int num;
    cout<<"Enter the number of array element:: ";
    cin>>num;

    vector<int>arr(num);

    cout<<"Enter the array element:: ";
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }

    bool res=isSorted(arr,0);
    if(res){
        cout<<"Array is sorted"<<endl;
    }else{
        cout<<"Array is not sorted."<<endl;
    }

    return 0;
}