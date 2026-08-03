#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(int idx, vector<int> &arr, int sum, vector<int> &ans)
{
    if (idx == arr.size())
    {
        ans.push_back(sum);
        return;
    }

    // include
    solve(idx + 1, arr, sum + arr[idx], ans);
    // exclude
    solve(idx + 1, arr, sum, ans);
}

vector<int> subsetsSum(vector<int> &arr)
{
    vector<int> ans;
    solve(0, arr, 0, ans);
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    vector<int> arr = {3, 4, 5};
    vector<int> ans = subsetsSum(arr);
    for (int i : ans)
    {
        cout << i << " " << endl;
    }

    return 0;
}