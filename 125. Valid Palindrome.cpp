#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {
        int i = 0, len = s.size();

        while (i < len - 1)
        {
            if (65 <= s[i] && s[i] <= 90)
            {
                s[i] = s[i] + 32;
            }
            else if (!((97 <= s[i] && s[i] <= 122) || (48 <= s[i] && s[i] <= 57)))
            {
                i++;
                continue;
            }

            if (65 <= s[len - 1] && s[len - 1] <= 90)
            {
                s[len - 1] = s[len - 1] + 32;
            }
            else if (!((97 <= s[len - 1] && s[len - 1] <= 122) || (48 <= s[len - 1] && s[len - 1] <= 57)))
            {
                len--;
                continue;
            }
            // cout << s[i] << " " << s[len - 1] << endl;

            if (s[i] != s[len - 1])
            {
                return false;
            }
            i++;
            len--;
        }
        return true;
    }
};

int main()
{
    Solution solution;

    cout << solution.isPalindrome("A man, a plan, a canal: Panama") << endl;
    cout << solution.isPalindrome("race a car") << endl;
    cout << solution.isPalindrome("0P") << endl;

    return 0;
}