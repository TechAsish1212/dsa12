#include<iostream>
using namespace std;

int binarySearch(int arr[],int key,int low,int high)
{
    int mid;
    if(low>high)
    {
        return -1;
    }
    else
    {
        mid=(low+high)/2; 
        if(key==arr[mid])
        {
            return mid;
        }
        else if(key<arr[mid])
        {
            return binarySearch(arr,key,low,mid-1);
        }
        else
        {
            return binarySearch(arr,key,mid+1,high);
        }
    }
}
    
int main()
{
    int size,key,low=0,high;

    cout<<"Enter the no of elements:: ";
    cin>>size;

    int arr[size];

    cout<<"Enter the all Array elements :: "<<endl;
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    cout<<"Enter the target value :: ";
    cin>>key;

    int pos=binarySearch(arr,key,0,size);
    if(pos!=-1)
    {
        cout<<"Element is found at index "<<pos<<endl;
    }
    else
    {
        cout<<"Element is not found"<<endl;
    }
return 0;
}