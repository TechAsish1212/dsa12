#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(string s, int start, int end)
{
    while (start < end)
    {
        if (s[start] != s[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

void solve(int idx, string s, vector<string> &curr, vector<vector<string>> &ans)
{
    // base case
    if (idx == s.size())
    {
        ans.push_back(curr);
        return;
    }

    for (int i = idx; i < s.size(); i++)
    {
        string part = s.substr(idx, i - idx + 1);
        if (isPalindrome(s, idx, i))
        {
            curr.push_back(part);
            solve(i + 1, s, curr, ans);
            // backtrack
            curr.pop_back();
        }
    }
}

vector<vector<string>> partition(string s)
{
    vector<vector<string>> ans;
    vector<string> curr;
    solve(0, s, curr, ans);

    return ans;
}

int main()
{
    string s = "abaabcaba";

    vector<vector<string>> ans = partition(s);

    for (auto &partition : ans)
    {
        cout << "[ ";
        for (auto &str : partition)
        {
            cout << str << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}