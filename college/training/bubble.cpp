#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of elements: ";
    // cin >> n;

    int arr[100]={2,1,4,3,6,4};

    cout << "Enter elements:\n";
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    for (int i = 0; i < size(arr) ; i++)
    {
        for (int j = i+1; j < size(arr) ; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
                
            }
        }
        
    }
    for (int i = 0; i < size(arr); i++)
    {
        cout << arr[i];
    }

    return 0;
}