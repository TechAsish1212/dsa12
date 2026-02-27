#include<iostream>
using namespace std;

int linearSearch(int arr[],int size,int key)
{
    if(size==0)
        return -1;
    if (arr[size-1]==key)
        return size-1;
    else
        return linearSearch(arr,size-1,key);
}
    
int main()
{
    int size,key;
    cout<<"Enter the no of elements:: ";
    cin>>size;
    int arr[size];

    cout<<"Enter the arrays element:: "<<endl;
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);

    cout<<"Enter the target value :: ";
    cin>>key;

    int ans=linearSearch(arr,size,key);
    if(ans==-1)
        cout<<"The element is not found"<<endl;
    else
        cout<<"The element is found at index "<<ans<<endl;

return 0;
}