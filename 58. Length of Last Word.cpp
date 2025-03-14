#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int len = 0, last;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ')
            {
                if (len != 0)
                {
                    last = len;
                }
                len = 0;
            }
            else
            {
                len++;
            }
        }
        if (len != 0)
        {
            last = len;
        }

        return last;
    }
};
int main()
{
    Solution solution;

    int result = solution.lengthOfLastWord("Hello World");
    cout << result << endl;

    result = solution.lengthOfLastWord("   fly me   to   the moon  ");
    cout << result << endl;

    result = solution.lengthOfLastWord("luffy is still joyboy");
    cout << result << endl;

    return 0;
}