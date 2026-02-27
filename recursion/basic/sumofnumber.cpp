#include<iostream>
using namespace std;
int sumofnumber(int n)
{
    // base case
    if(n==1)
    return 1;
    return n+sumofnumber(n-1);
}
    
int main()
{
    int num;
    cout<<"Enter the number :: ";
    cin>>num;
    if(num<0)
    {
        cout<<"Negative number is not natural"<<endl;
        return 9;
    }
    int op=sumofnumber(num);
    cout<<"Sum of "<<num <<" natural number is :: "<<op<<endl;
return 0;
}