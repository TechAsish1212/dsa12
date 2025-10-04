#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> factorial(int n)
{
    vector<int> ans(1, 1);
    while (n > 1)
    {
        int carry = 0, res, size = ans.size();
        for (int i = 0; i < size; i++)
        {
            res = ans[i] * n + carry;
            ans[i] = res % 10;
            carry = res / 10;
        }
        while (carry)
        {
            ans.push_back(carry % 10);
            carry = carry / 10;
        }
        n--;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
int main()
{
    int n;
    cout << "Enter the number:: ";
    cin >> n;
    vector<int> op = factorial(n);
    cout << "Answer is:: ";
    for (int digit : op)
    {
        cout << digit;
    }
    cout << endl;
    return 0;
}