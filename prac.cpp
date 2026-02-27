#include<iostream>
using namespace std;

int pertition(int arr[],int low,int high){
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<high;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}

void quickSort(int arr[],int low,int high)
{
    if(low<high)
    {
        int pi=pertition(arr,low,high);
        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);
    }
}
    
int main()
{
    int num,arr[100];

    cout<<"Enter the no. of elements:: ";
    cin>>num;

    cout<<"Enter the Arrays element::"<<endl;
    for(int i=0;i<num;i++)
        cin>>arr[i];

    quickSort(arr,0,num-1);

    cout<<"Sorted Array::->"<<endl;
    for(int i=0;i<num;i++)
    {
        cout<<arr[i]<<' ';
    }
return 0;
}