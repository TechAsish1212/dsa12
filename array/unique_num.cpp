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

// unique number function
int findUnique(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
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
    printArray(arr,size);
    cout<<"Unique element is::---->"<<endl;  
    int op=findUnique(arr,size);
    cout<<op;

    return 0;
}