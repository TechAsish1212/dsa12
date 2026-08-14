#include <iostream>
#include<vector>
using namespace std;

void rotateArray(vector<int> &nums, int k)
{
    int n = nums.size();
    if (n == 0)
        return;

    k = k % n;
    vector<int> temp(k);
    for (int i = 0; i < k; i++)
    {
        temp[i] = nums[i];
    }
    for (int i = k; i < n; i++)
    {
        nums[i - k] = nums[i];
    }
    for (int i = 0; i < k; i++)
    {
        nums[n - k + i] = temp[i];
    }
}

int main()
{

    return 0;
}