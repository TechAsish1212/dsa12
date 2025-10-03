#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// swap alternate function
void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

// print array
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

    printArray(arr, size);
    cout << endl;
    swapAlternate(arr, size);
    cout<<"After swapping --->"<<endl;
    printArray(arr, size);
    return 0;
}