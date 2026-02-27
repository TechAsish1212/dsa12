#include<iostream>
using namespace std;

int size,chain[100],mat[50][50],sol[50][50];
void print_optimal(int i,int j)
{
    if(i==j)
        cout<<"A"<<i;
    else
    {
        cout<<"(";
        print_optimal(i,sol[i][j]);
        print_optimal(sol[i][j]+1,j);
        cout<<')';
    }
}

int matrix_chain(int chain[])
{
    int i,j,k,l,n,q;
    n=size-1;
    for(i=1;i<=n;i++)
        mat[i][i]=0;
    for(l=2;l<=n;l++)
    {
        for(i=1;i<=(n-l+1);i++)
        {
            j=i+l-1;
            mat[i][j]=99999;
            for(k=i;k<=(j-1);k++)
            {
                q=mat[i][k]+mat[k+1][j]+chain[i-1]*chain[k]*chain[j];
                if(q<mat[i][j])
                {
                    mat[i][j]=q;
                    sol[i][j]=k;
                }
            }
        }
    }

    cout<<"print the solution matrix::->"<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<"["<<sol[i][j]<<"]";
        }
        cout<<endl;
    }
    cout<<"print the cost matrix::->"<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<"["<<mat[i][j]<<"]";
        }
        cout<<endl;
    }
    return mat[1][n];
}

    
int main()
{

    int i;
    cout<<"Enter the chain length:: ";
    cin>>size;
    for(i=0;i<size;i++)
    {
        cout<<"chain["<<i<<"]";
        cin>>chain[i];
    }
    matrix_chain(chain);

    cout << "Optimal parenthesization: ";
    print_optimal(1, size - 1);
    cout << endl;
    
return 0;
}