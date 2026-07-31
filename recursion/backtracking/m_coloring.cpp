#include <iostream>
#include <vector>
using namespace std;

bool find(int node, bool graph[101][101], int n, int m, vector<int> &color)
{
    // color the node with m color
    for (int i = 0; i < m; i++)
    {
        // check if adjacent nodes doesn't have same color
        bool isPossible = 1;
        for (int j = 0; j < n; j++)
        {
            if (graph[node][j] && color[j] == i)
            {
                isPossible = 0;
                break;
            }
        }

        if (isPossible)
        {
            color[node] = i;
            if (find(node + 1, graph, n, m, color))
            {
                return 1;
            }
            color[node] = -1;
        }
    }
    return 0;
}

bool graphColoring(bool graph[101][101], int m, int n)
{
    vector<int> color(n, -1);
    return find(0, graph, n, m, color);
}

int main()
{

    return 0;
}