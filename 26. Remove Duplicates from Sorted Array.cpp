#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        vector<int> result;
        int diff = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] != nums[i - 1])
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
    vector<int> nums = {1, 2, 3};
    int result = solution.removeDuplicates(nums);

    cout << result << endl;

    return 0;
}