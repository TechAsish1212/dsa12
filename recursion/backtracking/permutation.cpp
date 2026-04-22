
// // with extra space
// #include<iostream>
// #include<vector>


// using namespace std;

// void permute(int arr[],vector<int>&temp,vector<vector<int>>&ans,vector<bool>&visited){
//     // base case
//     if(visited.size()==temp.size()){
//         ans.push_back(temp);
//     }

//     for(int i=0;i<visited.size();i++){
//         if(visited[i]==0){
//             visited[i]=1;
//             temp.push_back(arr[i]);
//             permute(arr,temp,ans,visited);
//             visited[i]=0;
//             temp.pop_back();
//         }
//     }
// }

// int main(){

//     int arr[]={1,2,3};
//     vector<vector<int>>ans;
//     vector<int>temp;
//     vector<bool>visited(3,0);
//     permute(arr,temp,ans,visited);

//     for(int i=0;i<ans.size();i++){
//         for(int j=0;j<ans[i].size();j++){
//             cout<<ans[i][j]<<" ";
//         } 
//         cout<<endl;
//     }

//     return 0;
// }




// without extra space
#include <iostream>
#include <vector>
using namespace std;

void permute(vector<int> &arr, int index, vector<vector<int>> &ans) {
    
    // base case
    if (index == arr.size()) {
        ans.push_back(arr);
        return;
    }

    for (int i = index; i < arr.size(); i++) {

        // choose (swap)
        swap(arr[index], arr[i]);

        // explore
        permute(arr, index + 1, ans);

        // backtrack
        swap(arr[index], arr[i]);
    }
}

int main() {

    vector<int> arr = {1, 2, 3};
    vector<vector<int>> ans;

    permute(arr, 0, ans);

    // print result
    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}