#include<iostream>
using namespace std;
int sqaureSum(int num)
{
    if(num==1)
    {
        return 1;
    }
    return (num*num)+sqaureSum(num-1);
}
    
int main()
{
    int num;
    cout<<"Enter the number:: ";
    cin>>num;
    // int sum=0;
    // for(int i=1;i<=num;i++)
    // {
    //     sum+=i*i;
    // }
    // cout<<sum;
    int op=sqaureSum(num);
    cout<<"Sum of "<<num<<" sqaure is:: ";
    cout<<op;

return 0;
}