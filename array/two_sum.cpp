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

// pair sum function
void pairSum(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==key){
                cout<<"["<<arr[i]<<" "<<arr[j]<<"]"<<endl;
            }
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

    int key;
    cout<<"Enter the target value:: ";
    cin>>key;

    cout << "Arrays elements:::--->" << endl;
    printArray(arr, size);

    pairSum(arr,size,key);


    return 0;
}