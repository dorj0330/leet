#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int n = s.size();
        if (n == 0)
        {
            return 0;
        }
        vector<int> map(256, -1);
        int left = 0, right = 0;
        int maxLen = INT_MIN;
        while (right < n)
        {
            char ch = s[right];
            cout << "first map[ch]" << map[ch] << endl;
            if (map[ch] != -1)
            {
                left = max(map[s[right]] + 1, left);
            }

            map[ch] = right;
            cout << "second map[ch]" << map[ch] << endl;

            maxLen = max(maxLen, (right - left + 1));
            right++;
            cout << left << ' ' << right << endl;
        }
        return maxLen;
    }
};
int main()
{
    Solution solution;
    string input;
    int output;

    // cin >> input;
    output = solution.lengthOfLongestSubstring("abcabcd");
    cout << output;

    return 0;
}