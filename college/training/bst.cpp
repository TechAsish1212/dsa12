#include <iostream>
using namespace std;

bool isBSTArray(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (isBSTArray(arr, n))
        cout << "Array can represent inorder traversal of a BST";
    else
        cout << "Array cannot represent inorder traversal of a BST";

    return 0;
}