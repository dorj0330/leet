#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int loc = nums.size();
        int low = 0, high = loc - 1;
        while (low <= high)
        {
            int middle = (high + low) / 2;
            if (nums[middle] >= target)
            {
                loc = middle;
                high = middle - 1;
            }
            else
            {
                low = middle + 1;
            }
        }
        return loc;
    }
};
int main()
{
    Solution solution;
    vector<int> list = {1, 3, 5, 6};

    int result = solution.searchInsert(list, 5);
    cout << result << endl;

    result = solution.searchInsert(list, 2);
    cout << result << endl;

    result = solution.searchInsert(list, 7);
    cout << result << endl;

    return 0;
}