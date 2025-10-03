#include <iostream>
using namespace std;

void spiral(int arr[100][100], int top, int right, int bottom, int left)
{
    while (top <= bottom && left <= right)
    {
        for (int j = left; j <= right; j++)
        {
            cout << arr[top][j] << " ";
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            cout << arr[i][right] << " ";
        }
        right--;
        if (top <= bottom)
        {
            for (int j = right; j >= left; j--)
            {
                cout << arr[bottom][j] << " ";
            }
            bottom--;
        }
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                cout << arr[i][left] << " ";
            }
            left++;
        }
    }
}

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

int main()
{
    int row, col;
    cout << "Enter the number row:: ";
    cin >> row;
    cout << "Enter the number column:: ";
    cin >> col;

    int arr[100][100];

    int top = 0, right = col - 1, bottom = row - 1, left = 0;

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

    cout << "Spiral form array pint:----->" << endl;
    spiral(arr, top, right, bottom, left);
    return 0;
}