#include<iostream>
using namespace std;
    
int main()
{
    int num;

    cout<<"Enter the no of element:: ";
    cin>>num;

    int arr[num];

    cout<<"Enter the array element:: "<<endl;
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }

    int brr[num];
    for(int j=0;j<num;j++){
        brr[j]=arr[num-1-j];
    }

    for(int i=0;i<num;i++){
        cout<<brr[i]<<' ';
    }
return 0;
}