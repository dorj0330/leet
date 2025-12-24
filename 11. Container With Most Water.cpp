#include "./lib/stdc++.h"
using namespace std;

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int left = 0, right = height.size() - 1;
        int max_area = 0;

        while (left < right)
        {
            int h = min(height[left], height[right]);
            int w = right - left;
            max_area = max(max_area, h * w);

            if (height[left] < height[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }

        return max_area;
    }
};

int main()
{
    Solution solution;
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    int result1 = solution.maxArea(height);
    cout << result1 << endl;

    return 0;
}