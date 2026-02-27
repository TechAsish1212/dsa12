#include<iostream>
using namespace std;

void floyd_washall(int w[][100],int n)
{
    int D[100][100];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            D[i][j]=w[i][j];
        }
    }
    for(int k=1;k<=n;k++)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(D[i][j]>(D[i][k] + D[k][j]))
                    D[i][j]=D[i][k]+D[k][j];
            }
            
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<"["<<D[i][j]<<"]";
        }
        cout<<endl;
    }
}

int main()
{
    int w[100][100],num;
    cout<<"Enter the number of the vertices:: ";
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=num;j++)
            cin>>w[i][j];
    }
    floyd_washall(w,num);
return 0;
}