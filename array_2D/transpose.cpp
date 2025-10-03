#include <iostream>
using namespace std;

void printArray(int arr[100][100], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int trans(int arr[100][100], int row, int col)
{
    // int mat[100][100];
    // int i, j;

    // for (i = 0; i < row; i++)
    // {
    //     for (j = 0; j < col; j++)
    //     {
    //         mat[j][i] = arr[i][j];
    //     }
    // }
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cout << mat[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    for (int i = 0; i < row - 1; i++)
    {
        for (int j = i + 1; j < col; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }

    printArray(arr,row,col);
}



int main()
{
    int row, col;
    cout << "Enter the number row:: ";
    cin >> row;
    cout << "Enter the number column:: ";
    cin >> col;

    int arr[100][100];

    cout << "Enter the all array element:: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Original Array::---->" << endl;
    printArray(arr, row, col);

    cout << "After transpose ::----->" << endl;
    trans(arr, row, col);

    return 0;
}