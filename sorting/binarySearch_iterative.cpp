#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int key)
{
    int low=0,high=size-1,mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==key)
            return mid;
        else if(arr[mid]<key)
            low=mid+1;
        else
            high=low-1;
    }
    return -1;
}
    
int main()
{
    int size,key,i,ans;

    cout<<"Enter the no of element:: ";
    cin>>size;
    int arr[size];

    cout<<"Enter the Array Element :: "<<endl;
    for(i=0;i<size;i++)
        cin>>arr[i];
    
    cout<<"Enter the target value:: ";
    cin>>key;

    ans=binarySearch(arr,size,key);

    if(ans==-1)
        printf("Element is not found");
    else
        printf("Element is present at index %d",ans);
return 0;
}