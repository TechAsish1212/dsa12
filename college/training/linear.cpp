#include <iostream>
using namespace std;

int main() {
    int n, target;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> target;

    int index = -1;

    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            index = i;
            cout<<i<<" "<<endl;
        }
    }

    if(index != -1)
        cout << "Element found at index: " << index<<endl;
    else
        cout << "Element not found\n";

    return 0;
}