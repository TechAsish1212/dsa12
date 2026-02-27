#include<iostream>
using namespace std;

void decrease(int n){
    if (n==0) return;
    cout<<n<<" ";
    decrease(n-1);
}
    
int main()
{
    int num;
    cout<<"Enter the number :: ";
    cin>>num;
    decrease(num);
return 0;
}