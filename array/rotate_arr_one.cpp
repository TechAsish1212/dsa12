#include <iostream>
#include<vector>
using namespace std;

void rotateByOneplace(vector<int>&nums){
    int n=nums.size();
    int temp=nums[0];
    for(int i=1;i<n;i++){
        nums[i-1]=nums[i];
    }
    nums[n-1]=temp;
}

int main() {
    
    return 0;
}