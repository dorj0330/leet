#include "./lib/stdc++.h"
using namespace std;
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        sort(strs.begin(), strs.end(),
             [](const string &a, const string &b)
             {
                 return a.size() < b.size();
             });
        int n = strs.size(), m = strs[n - 1].size();
        bool isCommon;

        for (int i = 0; i < m; i++)
        {
            isCommon = true;
            for (int j = 0; j < n - 1; j++)
            {
                if (strs[j].substr(0, m - i) != strs[n - 1].substr(0, m - i))
                {
                    isCommon = false;
                    break;
                }
            }
            if (isCommon)
            {
                return strs[n - 1].substr(0, m - i);
            }
        }
        return "";
    }
};

int main()
{
    Solution solution;
    vector<string> strs = {"flower", "flow", "flight"};
    string result1 = solution.longestCommonPrefix(strs);
    cout << result1 << endl;

    return 0;
}
