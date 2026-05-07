#include<iostream>

using namespace std;

int count=0;

void toh(int n,char sou,char help,char dest){
    // base case
    if(n==1){
        cout<<"Move disk "<<n<<" from "<<sou<<" to "<<dest<<endl;
        count++;
        return; 
    }

    toh(n-1, sou, dest, help);
    cout << "Move disk " << n << " from " << sou << " to " << dest << endl;
    count++;
    toh(n-1, help, sou, dest);

}

int main(){
    int n;
    cout << "Enter number of disks: ";
    cin >> n;

    toh(n, 'A', 'B', 'C');
    cout<<"\nTotal moves:: "<<count<<endl;
    return 0;
}