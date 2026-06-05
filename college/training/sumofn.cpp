#include <iostream>
using namespace std;

int sumofN(int n){
    if(n==0){
        return 0;
    }
    return sumofN(n-1)+n;
}


int main() {

    int n;
    cout<<"Enter the number :: ";
    cin>>n;

    cout<<sumofN(n)<<endl;

    return 0;
}