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

// duplicate number function
int findDuplicate(int arr[], int size)
{
    int ans = 0;
    // XOR all array elements
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
   // XOR [1,N-1]
   for(int i=1;i<size;i++){
    ans=ans^i;
   } 
   return ans;
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

    cout<<"Duplicate value is:: --->"<<endl;
    int op=findDuplicate(arr,size);
    cout<<op;
    return 0;
}