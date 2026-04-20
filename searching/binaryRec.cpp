#include<iostream>
using namespace std;

int binarySearch(int arr[],int low,int high,int key){
    if(low>high){
        return -1;
    }

    int mid=low+(high-low)/2;

    if(arr[mid]==key){
        return mid;
    }else if(arr[mid]<key){
        return binarySearch(arr,mid+1,high,key);
    }else{
        return binarySearch(arr,low,mid-1,key);
    }
}

int main(){

    int size,key,low=0,high;

    cout<<"Enter the no of elements:: ";
    cin>>size;

    int arr[size];

    cout<<"Enter the all Array elements :: "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the target value :: ";
    cin>>key;

    int pos=binarySearch(arr,0,size,key);
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