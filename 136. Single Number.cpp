#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int singleNumber(const vector<int> &nums)
    // int singleNumber(vector<int> &nums)
    {
        int result = 0;
        for (int num : nums)
        {
            result ^= num;
        }
        return result;
    }
};

int main()
{
    Solution solution;

    cout << solution.singleNumber({2, 2, 1}) << endl;
    cout << solution.singleNumber({4, 1, 2, 1, 2}) << endl;
    cout << solution.singleNumber({1}) << endl;

    return 0;
}