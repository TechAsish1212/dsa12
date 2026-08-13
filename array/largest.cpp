#include <iostream>
using namespace std;

int largestElement(int arr[],int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}

int main() {

      int arr1[] = {2, 5, 1, 3, 0};
    int n = 5;  // Size of the array
    int max = largestElement(arr1, n);  
    cout << "The largest element in the array is: " << max << endl; 
    
    return 0;
}