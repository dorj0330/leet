#include "./lib/stdc++.h"
using namespace std;

class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        int i, j;
        bool a, b;
        if (s.length() != t.length())
        {
            return false;
        }

        for (i = 0; i < s.length(); i++)
        {
            for (j = 0; j < s.length(); j++)
            {
                a = s[i] == s[j];
                b = t[i] == t[j];
                if (a != b)
                {
                    return false;
                }
            }
        }
        return true;
    }
};

int main()
{
    Solution solution;
    bool result;
    result = solution.isIsomorphic("paper", "title");
    cout << result << endl;

    return 0;
}