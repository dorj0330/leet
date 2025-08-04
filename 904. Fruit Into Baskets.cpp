#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int totalFruit(vector<int> &fruits)
    {
        unordered_map<int, int> basket;
        int left = 0, maxLen = 0;

        for (int right = 0; right < fruits.size(); right++)
        {
            basket[fruits[right]]++;

            while (basket.size() > 2)
            {
                basket[fruits[left]]--;
                if (basket[fruits[left]] == 0)
                {
                    basket.erase(fruits[left]);
                }
                left++;
            }

            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};

int main()
{
    Solution solution;
    vector<int> nums;

    nums = {1, 2, 1};
    cout << solution.totalFruit(nums) << endl;

    nums = {0, 1, 2, 2};
    cout << solution.totalFruit(nums) << endl;

    nums = {1, 2, 3, 2, 2};
    cout << solution.totalFruit(nums) << endl;

    return 0;
}
