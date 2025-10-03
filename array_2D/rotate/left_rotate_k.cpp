#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> rotateMatrixLeft(vector<vector<int>>& mat, int k) {
    int n = mat.size();
    int m = mat[0].size();
    int total = n * m;

    // Flatten matrix
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr.push_back(mat[i][j]);
        }
    }

    // Effective rotation
    k = k % total;

    // Rotate left by k
    vector<int> rotated;
    for (int i = 0; i < total; i++) {
        rotated.push_back(arr[(i + k) % total]);
    }

    // Put back into matrix
    vector<vector<int>> result(n, vector<int>(m));
    int idx = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            result[i][j] = rotated[idx++];
        }
    }

    return result;
}

int main() {
    int n, m, k;
    cout << "Enter rows and cols: ";
    cin >> n >> m;

    vector<vector<int>> mat(n, vector<int>(m));
    cout << "Enter matrix elements:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }

    cout << "Enter k: ";
    cin >> k;

    vector<vector<int>> ans = rotateMatrixLeft(mat, k);

    cout << "Resulting matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
