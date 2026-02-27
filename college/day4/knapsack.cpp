#include <iostream>
#include <algorithm>

using namespace std;


void knapsack(int profit[], int weight[], int n, int capacity) {
    double ratio[n]; 
    int index[n];   

    for (int i = 0; i < n; i++) {
        ratio[i] = (double)profit[i] / weight[i];
        index[i] = i;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ratio[i] < ratio[j]) {
                swap(ratio[i], ratio[j]);
                swap(weight[i], weight[j]);
                swap(profit[i], profit[j]);
                swap(index[i], index[j]);
            }
        }
    }

    double totalProfit = 0.0;
    double x[n] = {0}; 

    for (int i = 0; i < n; i++) {
        if (weight[i] <= capacity) {
            x[i] = 1.0;  
            totalProfit += profit[i];
            capacity -= weight[i];
        } else {
            x[i] = (double)capacity / weight[i]; 
            totalProfit += profit[i] * x[i];
            break;
        }
    }

    cout << "Maximum Profit: " << totalProfit << endl;
    cout << "Solution Array: ";
    for (int i = 0; i < n; i++) {
        cout << x[i] << " ";
    }
    cout << endl;
}

int main() {
    int n, capacity;
    
    cout << "Enter the number of items: ";
    cin >> n;

    int profit[n], weight[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter profit of item " << i + 1 << ": ";
        cin >> profit[i];
        cout << "Enter weight of item " << i + 1 << ": ";
        cin >> weight[i];
    }

    cout << "Enter knapsack capacity: ";
    cin >> capacity;

    knapsack(profit, weight, n, capacity);

    return 0;
}
