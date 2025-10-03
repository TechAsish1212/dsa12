#include <iostream>
using namespace std;

void clockWiseRotateBy90(int arr[100][100], int num)
{
    //  Transpose the matrix
    for (int i = 0; i < num - 1; i++)
    {
        for (int j = i + 1; j < num; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }

    //  Reverse  row 
    for (int i = 0; i < num; i++)
    {
        int start = 0, end = num - 1;
        while (start < end)
        {
            swap(arr[i][start], arr[i][end]);
            start++;
            end--;
        }
    }
}

void printArray(int arr[100][100], int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int num, k;

    cout << "Enter the size of square matrix: ";
    cin >> num;

    int arr[100][100];

    cout << "Enter all array elements: " << endl;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Enter the number of rotations (k): ";
    cin >> k;

    cout << "\nOriginal Array:" << endl;
    printArray(arr, num);

    k = k % 4;

    for (int i = 0; i < k; i++)
    {
        clockWiseRotateBy90(arr, num);
    }

    cout << "\nMatrix after " << k << " clockwise rotations:" << endl;
    printArray(arr, num);

    return 0;
}

