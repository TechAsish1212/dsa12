#include <iostream>
using namespace std;

// print array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// sort 0 1 functions
void sortOne(int arr[], int size)
{
    int left = 0, right = size - 1;
    while (left < right)
    {
        if (arr[left] == 0 && left < right)
        {
            left++;
        }
        if (arr[right] == 1 && left < right)
        {
            right--;
        }
        else 
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main()
{
    int size;
    cout << "Enter the size of array:: ";
    cin >> size;

    int arr[100];
    cout << "Enter the all array elements::-->" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "All array elements::--->" << endl;
    printArray(arr, size);

    sortOne(arr, size);
    printArray(arr,size);
    return 0;
}