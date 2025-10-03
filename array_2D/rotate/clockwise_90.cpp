#include <iostream>
using namespace std;

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

void clockWiseRotateBy90(int arr[100][100], int num)
{
    // using extra space
    // int ans[100][100];

    // for (int i = 0; i < num; i++)
    // {
    //     for (int j = 0; j < num; j++)
    //     {
    //         ans[j][num-1-i]=arr[i][j];
    //     }
    // }

    //  for (int i = 0; i < num; i++)
    // {
    //     for (int j = 0; j < num; j++)
    //     {
    //         cout << ans[i][j] << " ";
    //     }
    //     cout<<endl;
    // }

    // without using extra space
    // transpose
    for (int i = 0; i < (num - 1); i++)
    {
        for (int j = i+1; j < num; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
    // reverse num
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
    
    // print array
    printArray(arr,num);
}



int main()
{
    int num;
    cout << "Enter the size of sqaure matrix:: ";
    cin >> num;

    int arr[100][100];

    cout << "Enter the all array element:: " << endl;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Original Array::---->" << endl;
    printArray(arr, num);

    cout << "Rotate matrix by 90 degree clockwise array print::--->" << endl;
    clockWiseRotateBy90(arr, num);
    return 0;
}