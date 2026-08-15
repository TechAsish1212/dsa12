// brute force
#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int> &nums)
{

    // brute force approach

    // int n = nums.size();
    // vector<int> temp(n, 0);
    // int index = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (nums[i] != 0)
    //     {
    //         temp[index] = nums[i];
    //         index++;
    //     }
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     nums[i] = temp[i];
    // }

    // optimal approach
    int n = nums.size();
    int j = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] != 0)
        {
            swap(nums[i], nums[j]);
            j++;
        }
    }
}
int main()
{

    vector<int> arr = {0, 4, 3, 0, 2, 0, 9};
    moveZeroes(arr);

    cout << "Array after moving zeroes: ";
    for (int x : arr)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}