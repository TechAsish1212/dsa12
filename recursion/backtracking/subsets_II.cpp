#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void genSubsets(vector<int>&arr,vector<int>&ans,int i,vector<vector<int>>&res){
    // base case
    if(i==arr.size()){
        res.push_back(ans);
        return;
    }

    // include
    ans.push_back(arr[i]);
    genSubsets(arr,ans,i+1,res);
    // backtrack
    ans.pop_back();
    // skipping the duplicate value
    int idx=i+1;
    while(idx<arr.size() && arr[idx]==arr[idx-1]){
        idx++;
    }

    // exclude
    genSubsets(arr,ans,idx,res);
}

vector<vector<int>>subWithDup(vector<int>nums){
    vector<int>ans;
    vector<vector<int>>res;

    // sort 
    sort(nums.begin(),nums.end());

    genSubsets(nums,ans,0,res);

    return res; 
}

int main(){
      int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> nums(n);
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    vector<vector<int>> result = subWithDup(nums);
    
    cout << "\nAll unique subsets:\n";
    cout << "[ ";
    for(auto subset : result) {
        cout << "[";
        for(int i = 0; i < subset.size(); i++) {
            cout << subset[i];
            if(i < subset.size() - 1) cout << ",";
        }
        cout << "] ";
    }
    cout << "]\n";
    return 0;
}