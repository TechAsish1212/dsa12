#include<iostream>
#include<vector>
using namespace std;

void genSubsets(vector<int>&arr,vector<int>&ans,int i){
    // base case
    if(i==arr.size()){
        cout<<"{ ";
        for(int val:ans){
            cout<<val<<" ";
        }
        cout<<"}"<<endl;
        return;
    }

    // include
    ans.push_back(arr[i]);
    genSubsets(arr,ans,i+1);

    // backtrack
    ans.pop_back();

    // exclude 
    genSubsets(arr,ans,i+1);
}

int main(){
    vector<int> arr;
    int n, element;
    
    cout << "Enter number of elements: ";
    cin >> n;
    
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++){
        cin >> element;
        arr.push_back(element);
    }
    
    cout << "\nAll subsets of { ";
    for(int val : arr){
        cout << val << " ";
    }
    cout << "}:\n\n";
    
    vector<int> ans;
    genSubsets(arr, ans, 0);
    return 0;
}