#include <iostream>
using namespace std;

int peakIndexMountain(int arr[], int start, int end, int size)
{
    while (start <= end)
    {
        int mid = (start + end) / 2;

        // peak element
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
            return mid;

        // Right side move
        else if (arr[mid] > arr[mid - 1])
            start = mid + 1;

        // Left side move
        else
            end = mid - 1;
    }
    return -1;
}

int main()
{
    int num;
    cout << "Enter the array size:: ";
    cin >> num;

    int arr[num];
    cout << "Enter the array element::--->" << endl;
    for (int i = 0; i <= num; i++)
    {
        cin >> arr[i];
    }

    cout << "Array element::---->" << endl;
    for (int i = 0; i <= num; i++)
    {
        cout << arr[i] << ' ';
    }

    int ans = peakIndexMountain(arr, 0, num - 1, num);

    cout<<endl;
    cout<<"Mountain Index is :: "<<ans<<endl;

    return 0;
}