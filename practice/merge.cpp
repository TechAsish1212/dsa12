#include <iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right) {
    int num1 = mid - left + 1;
    int num2 = right - mid;

    int L[100], R[100];

    for (int i = 0; i < num1; i++)
        L[i] = arr[left + i];

    for (int j = 0; j < num2; j++)
        R[j] = arr[mid + 1 + j];

    L[num1] = 99999; 
    R[num2] = 99999;

    int i = 0, j = 0;

    for (int k = left; k <= right; k++) {
        if (L[i] < R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main() {
    int num;
    cout << "Enter the number of elements: ";
    cin >> num;

    int arr[100];
    cout << "Enter the array elements: ";
    for (int i = 0; i < num; i++) {
        cin >> arr[i];
    }

    mergeSort(arr, 0, num - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < num; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
