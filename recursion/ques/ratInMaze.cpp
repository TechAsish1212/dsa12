#include <iostream>
#include<vector>
using namespace std;

int row[4] = {1, 0, 0, -1};
int col[4] = {0, -1, 1, 0};
string dir = "DLRU";

bool valid(int i, int j, int n)
{
    return i >= 0 && i < n && j >= 0 && j < n;
}

void solve(int i, int j, int n,
           vector<vector<int>> &maze,
           string &path,
           vector<string> &ans,
           vector<vector<bool>> &visit)
{

    if (i == n - 1 && j == n - 1)
    {
        ans.push_back(path);
        return;
    }

    visit[i][j] = true;

    for (int k = 0; k < 4; k++)
    {
        int ni = i + row[k];
        int nj = j + col[k];

        if (valid(ni, nj, n) &&
            maze[ni][nj] == 1 &&
            !visit[ni][nj])
        {

            path.push_back(dir[k]);
            solve(ni, nj, n, maze, path, ans, visit);
            path.pop_back();
        }
    }

    visit[i][j] = false; // backtrack
}

vector<string> ratInMaze(vector<vector<int>> &maze)
{

    int n = maze.size();
    vector<string> ans;

    if (maze[0][0] == 0 || maze[n - 1][n - 1] == 0)
        return ans;

    vector<vector<bool>> visit(n, vector<bool>(n, false));
    string path = "";

    solve(0, 0, n, maze, path, ans, visit);

    return ans;
}

int main()
{

    return 0;
}