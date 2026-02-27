#include<iostream>
using namespace std;
    
int linearSearch(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            return i+1;
        }
    }
    return -1;
}
int main()
{
    int size,key,pos=-1;

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

    pos=linearSearch(arr,size,key);
    if(pos!=-1)
    {
        cout<<"Element is found at "<<pos<<" position"<<endl;
    }
    else
    {
        cout<<"Element is not found"<<endl;
    }
return 0;
}