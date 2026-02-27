#include<iostream>
using namespace std;
// increasing order number 1 to n
// method-1
// void increase(int n,int k)
// {
//     if(n==k)
//     {
//         cout<<k<<endl;
//         return;
//     }
//     cout<<n<<endl;
//     increase(n+1,k);
//     return;
// }

// meethod-2
void increase(int n)
{
    if(n==0)
    {
        return;
    }
    increase(n-1);
    cout<<n<<endl;
    return;
}
// increasing all even number 1 to n
void evenNum(int n)
{
    if(n==2)
    {
        cout<<2<<endl;
        return;
    }
    evenNum(n-2);
    cout<<n<<endl;
    return;
}
int main()
{
    int n;
    cout<<"Enter the value of n:: ";
    cin>>n;
    cout<<endl;
    cout<<"All Increasing number:: ->"<<endl;
    increase(n);
    cout<<"All even increasing number:: ->"<<endl;
    if(n%2==1)
    {
        n--;
    }
    evenNum(n);
return 0;
}