#include<iostream>
using namespace std;
int fac(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    return n*fac(n-1);
}
    
int main()
{
    int num;
    cout<<"Enter the number :: ";
    cin>>num;
    if(num<0)
    {
        cout<<"Negative number not possible to calculate Factorial"<<endl;
        return 9;
    }
    cout<<"Factorial of "<<num <<" is:: ";
    cout<<fac(num);
return 0;
}