#include <iostream>
using namespace std;

int reverseNumber(int n, int rev = 0){
    if(n == 0)          // Base case
        return rev;
    
    return reverseNumber(n / 10, rev * 10 + n % 10);  // Recursive call
}

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;

    cout << "Reversed Number = " << reverseNumber(n);

    return 0;
}