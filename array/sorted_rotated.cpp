// leetcode -1752
#include <iostream>
#include <vector>
using namespace std;
bool check(vector<int> &nums)
{
    int n = nums.size();
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] > nums[(i + 1) % n])
        {
            count++;
        }
    }
    return count <= 1;
}

int main()
{

    vector<int> nums = {3, 4, 5, 1, 2};
    bool res = check(nums);
    cout << boolalpha << res << endl;
    return 0;
}