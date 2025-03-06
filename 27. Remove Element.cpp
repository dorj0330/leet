#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int diff = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != val)
            {
                nums[diff] = nums[i];
                diff++;
            }
        }
        return diff;
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {3, 2, 2, 3};
    int result = solution.removeElement(nums, 3);

    cout << result << endl;

    return 0;
}