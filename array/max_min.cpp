#include <iostream>
using namespace std;

// maximum element
int getMax(int arr[], int size)
{

    int max_element = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max_element)
        {
            max_element = arr[i];
        }
    }
    return max_element;
}

// minimum element
int getMin(int arr[], int size)
{

    int min_element = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min_element)
        {
            min_element = arr[i];
        }
    }
    return min_element;
}

int main()
{
    int size;
    cout << "Enter the Size of Array:: ";
    cin >> size;

    int arr[10];
    cout << "Enter the element of Array::" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int minimum = getMin(arr, size);
    int maximum = getMax(arr, size);

    cout << "The maximum numbers of the array:: " << maximum << endl;
    cout << "The minimum numbers of the array:: " << minimum << endl;

    return 0;
}