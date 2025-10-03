#include <iostream>
using namespace std;

// swap
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
// reverse function
void reverseArr(int arr[], int size)
{
    int start = 0, end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
// print Array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size;
    cout << "Enter the size of Array:: ";
    cin >> size;
    int arr[100];
    cout << "Enter the all element:: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Input Array::-->" << endl;
    printArray(arr, size);  
    reverseArr(arr, size);
    cout << "Reverse Array::-->" << endl;
    printArray(arr, size);

    return 0;
}