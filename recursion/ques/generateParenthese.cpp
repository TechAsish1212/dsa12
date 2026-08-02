#include <iostream>
#include <vector>
using namespace std;

void solve(int l,int r,int n,string temp,vector<string>&ans){
    // base
    if((l+r)==2*n){
        ans.push_back(temp);
        return;
    }

    // left
    if(l<n){
        temp.push_back('(');
        solve(l+1,r,n,temp,ans);
        temp.pop_back();
    }
    // right
      if(r<l){
        temp.push_back(')');
        solve(l,r+1,n,temp,ans);
        temp.pop_back();
    }
}

int main()
{
    int n;
    cout<<"Enter the no. of item::  ";
    cin >> n;

    vector<string> ans;
    string curr = "";

    solve(0, 0, n, curr, ans);

    for (string s : ans)
    {
        cout << s << endl;
    }

    return 0;

    return 0;
}