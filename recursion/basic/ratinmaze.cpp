#include <bits/stdc++.h>
using namespace std;

bool isSafe(int x, int y, int n, vector<vector<int>>& maze, vector<vector<bool>>& visited) {
    return (x >= 0 && y >= 0 && x < n && y < n &&
            maze[x][y] == 1 && !visited[x][y]);
}

void solve(int x, int y, vector<vector<int>>& maze, int n,
           vector<string>& result, string path,
           vector<vector<bool>>& visited) {

    // reached destination
    if (x == n - 1 && y == n - 1) {
        result.push_back(path);
        return;
    }

    visited[x][y] = true;

    // Down
    if (isSafe(x + 1, y, n, maze, visited))
        solve(x + 1, y, maze, n, result, path + 'D', visited);

    // Left
    if (isSafe(x, y - 1, n, maze, visited))
        solve(x, y - 1, maze, n, result, path + 'L', visited);

    // Right
    if (isSafe(x, y + 1, n, maze, visited))
        solve(x, y + 1, maze, n, result, path + 'R', visited);

    // Up
    if (isSafe(x - 1, y, n, maze, visited))
        solve(x - 1, y, maze, n, result, path + 'U', visited);

    // backtrack
    visited[x][y] = false;
}

vector<string> findPath(vector<vector<int>>& maze, int n) {
    vector<string> result;

    if (maze[0][0] == 0) return result;

    vector<vector<bool>> visited(n, vector<bool>(n, false));
    solve(0, 0, maze, n, result, "", visited);

    sort(result.begin(), result.end()); // optional
    return result;
}

int main() {
    vector<vector<int>> maze = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };

    int n = maze.size();

    vector<string> paths = findPath(maze, n);

    for (auto path : paths)
        cout << path << endl;

    return 0;
}