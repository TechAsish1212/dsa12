#include<iostream>
using namespace std;

void wave(int arr[100][100],int row,int col){
    for(int j=0;j<col;j++){
        if(j%2==0){
            for(int i=0;i<row;i++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int i=row-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}

void printArray(int arr[100][100],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int row,col;
    cout<<"Enter the number row:: ";
    cin>>row;
    cout<<"Enter the number column:: ";
    cin>>col;

    int arr[100][100];

    cout<<"Enter the all array element:: "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Original Array::---->"<<endl;
    printArray(arr,row,col);

    cout<<"wave form array print::--->"<<endl;
    wave(arr,row,col);


return 0;
}