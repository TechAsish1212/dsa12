#include <iostream>
#include <vector>
#include <string>
using namespace std;

void find(int row,int n,vector<string>&Board,vector<vector<string>>&ans,vector<bool>&col,vector<bool>&leftDiag,vector<bool>&rightDiag){
    // base condition
    if(row==n){
        ans.push_back(Board);
        return;
    }

    // put queen at any n position
    for(int i=0;i<n;i++){
        int leftIndex=n-1+i-row;
        int rightIndex=i+row;
        if(col[i]==0&&leftDiag[leftIndex]==0&&rightDiag[rightIndex]==0){
            col[i]=1;
            leftDiag[leftIndex]=1;
            rightDiag[rightIndex]=1;
            Board[row][i]='Q';
            find(row+1,n,Board,ans,col,leftDiag,rightDiag);
            col[i]=0;
            leftDiag[leftIndex]=0;
            rightDiag[rightIndex]=0;
            Board[row][i]='.';
        }
    }
}

vector<vector<string>>solveQueen(int n){
    vector<vector<string>>ans;
    vector<string>Board(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            Board[i].push_back('.');
        }
    }

    vector<bool>col(n,0);
    vector<bool>leftDiag(2*n-1,0);
    vector<bool>rightDiag(2*n-1,0);

    find(0,n,Board,ans,col,leftDiag,rightDiag);
    return ans;
}

int main() {
    int n;

    cout << "Enter value of N: ";
    cin >> n;

    vector<vector<string>> ans = solveQueen(n);

    cout << "\nTotal Solutions = " << ans.size() << "\n\n";

    for(int i=0;i<ans.size();i++){
        cout << "Solution " << i+1 << ":\n";

        for(string row : ans[i]){
            cout << row << endl;
        }

        cout << endl;
    }

    return 0;
}