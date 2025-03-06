#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        for (int i = 0; i < haystack.length(); i++)
        {
            bool state = true;
            for (int j = 0; j < needle.length(); j++)
            {
                if (haystack[i + j] != needle[j])
                {
                    state = false;
                    break;
                }
            }
            if (state)
            {
                return i;
            }
        }
        return -1;
    }
};
int main()
{
    Solution solution;
    int result = solution.strStr("asadbutsad", "sad");

    cout << result << endl;

    result = solution.strStr("leetcode", "leeto");

    cout << result << endl;

    return 0;
}