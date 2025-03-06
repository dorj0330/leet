#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false;

        int i = 0, len;
        string str;
        bool notEqual = 0;
        str = to_string(x);
        len = str.length();
        while (i < len / 2)
        {
            if (str[i] == str[len - i - 1])
            {
                notEqual = 0;
            }
            else
            {
                notEqual = 1;
                break;
            }
            i++;
        }
        if (notEqual == 1)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};
int main()
{
    Solution solution;
    string input;
    bool output;

    // cin >> input;
    output = solution.isPalindrome(1111);
    cout << output;

    return 0;
}