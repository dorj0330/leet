#include "./lib/stdc++.h"
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxAnd = 0;
        for (int num : nums) {
            maxAnd = max(maxAnd, num);
        }

        int maxLength = 0;
        int currentLength = 0;
        for (int num : nums) {
            if (num == maxAnd) {
                currentLength++;
                maxLength = max(maxLength, currentLength);
            } else {
                currentLength = 0;
            }
        }

        return maxLength;
    }
};

int main(){
    Solution solution;
    int result;
    vector<int> nums = {1,2,3,3,2,2};
    result = solution.longestSubarray(nums);
    cout << result << endl;
    return 0;
}