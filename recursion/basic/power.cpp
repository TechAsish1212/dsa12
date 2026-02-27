#include<iostream>
using namespace std;
    int powNum(int num,int pow) 
    {
        // base case
        if(pow==0)
        {
            return 1;
        }
        if(pow==1) 
        {
            return num;
        }
        return num*powNum(num,pow-1);
    }
int main()
{
    int num,pow;
    cout<<"Enter the number:: ";
    cin>>num;
    cout<<"Enter the power:: ";
    cin>>pow;
    int op=powNum(num,pow);
    cout<<num<<"^"<<pow<<" is:: "<<op<<endl;
return 0;
}