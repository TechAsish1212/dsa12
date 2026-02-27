#include<iostream>
using namespace std;
// Decreasing number n to 1
void num(int n)
{
    if(n==0) return;
    cout<<n<<endl;
    num(n-1);
    return ;
}

// All even number n to 1
void evenNum(int n)
{
    if(n==2) 
    {
        cout<<2<<endl;
        return ;
    }
    cout<<n<<endl;
    evenNum(n-2);
}
    
int main()
{
    int n;
    cout<<"Enter the value n:: ";
    cin>>n;
    cout<<"All decreasing number:: ->"<<endl;
    num(n);
    cout<<"All decreasing even number:: -> "<<endl;
    evenNum(n);
return 0;
}