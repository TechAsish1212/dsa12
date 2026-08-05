#include <iostream>
#include<vector>
using namespace std;

void solve(int idx, vector<int> &candidates, int target, vector<int> &curr, vector<vector<int>> &ans)
{
    // base
    if (target == 0)
    {
        ans.push_back(curr);
        return;
    }

    if (idx == candidates.size() || target < 0)
    {
        return;
    }

    // take
    curr.push_back(candidates[idx]);
    solve(idx, candidates, target - candidates[idx], curr, ans);
    curr.pop_back();
    // not take
    solve(idx + 1, candidates, target, curr, ans);
}

vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{
    vector<vector<int>> ans;
    vector<int> curr;
    solve(0, candidates, target, curr, ans);
    return ans;
}

int main()
{

    return 0;
}