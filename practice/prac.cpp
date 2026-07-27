// #include<iostream>

// using namespace std;

// void reverseArr(int arr[],int size){
//     int start=0;
//     int end=size-1;

//     while(start<=end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
// }

// int main(){
//     int size,arr[100];
//     cout<<"Enter the size of Array: ";
//     cin>>size;
//     cout<<"Enter the all element of array:: ";
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }
//     reverseArr(arr,size);
//     cout<<"after reverse:: ";
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// #include<iostream>

// using namespace std;

// // void alterReverseArr(int arr[],int size){
// //     for(int i=0;i<size;i+=2){
// //         if(i+1<size){
// //             swap(arr[i],arr[i+1]);
// //         }
// //     }
// // }

// int uniqueNumber(int arr[],int size){
//     int ans=0;
//     for(int i=0;i<size;i++){
//         ans=ans^arr[i];
//     }
//     return ans;
// }

// int main(){
//     int size,arr[100];
//     cout<<"Enter the size of Array: ";
//     cin>>size;
//     cout<<"Enter the all element of array:: ";
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }
//     // alterReverseArr(arr,size);
//     int op=uniqueNumber(arr,size);
//     // cout<<"after reverse:: ";
//     // for(int i=0;i<size;i++){
//     //     cout<<arr[i]<<" ";
//     // }
//     cout<<"Unique number:: "<<op;
//     cout<<endl;
//     return 0;
// }

#include <iostream>
using namespace std;

// print array
void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

// pair sum function
void pairSum(int arr[], int size, int key) {
  for (int i = 0; i < size; i++) {
    for (int j = i + 1; j < size; j++) {
      if (arr[i] + arr[j] == key) {
        cout << "[" << arr[i] << " " << arr[j] << "]" << endl;
      }
    }
  }
}
int main() {
  int size;
  cout << "Enter the size of array:: ";
  cin >> size;

  int arr[100];
  cout << "Enter the all array elements::-->" << endl;
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }

  int key;
  cout << "Enter the target value:: ";
  cin >> key;

  cout << "Arrays elements:::--->" << endl;
  printArray(arr, size);

  pairSum(arr, size, key);

  return 0;
}