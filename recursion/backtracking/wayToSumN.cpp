// #include<iostream>
// using namespace std;

// int way(int arr[], int m, int sum){

//     if(sum == 0) return 1;
//     if(sum < 0) return 0;

//     int ans = 0;
//     for(int i = 0; i < m; i++){
//         ans += way(arr, m, sum - arr[i]);
//     }
//     return ans;
// }

// int main(){
//     int arr[] = {1, 2, 3};
//     int m = 3;
//     int sum = 4;

//     cout << way(arr, m, sum);

//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

void solve(int arr[], int m, int sum, vector<int>& path, vector<vector<int>>& ans) {

    if (sum == 0) {
        ans.push_back(path);   // store one valid way
        return;
    }

    if (sum < 0) return;

    for (int i = 0; i < m; i++) {

        path.push_back(arr[i]);                 // choose
        solve(arr, m, sum - arr[i], path, ans); // explore
        path.pop_back();                        // undo
    }
}

int main() {
    int arr[] = {1, 5, 6};
    int m = 3;
    int sum = 7;

    vector<vector<int>> ans;
    vector<int> path;

    solve(arr, m, sum, path, ans);

    // print result
    for (auto &v : ans) {
        for (int x : v) cout << x << " ";
        cout << endl;
    }

    return 0;
}