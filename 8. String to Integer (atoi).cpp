#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int myAtoi(string s)
    {
        int result = 0;
        int sign = 1;
        int i = 0;
        int n = s.size();

        while (i < n && s[i] == ' ')
            i++;

        if (i < n && (s[i] == '+' || s[i] == '-'))
        {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        while (i < n && isDigit(s[i]))
        {
            int digit = s[i] - '0';

            if (result > INT_MAX / 10 ||
                (result == INT_MAX / 10 && digit > 7))
            {
                return sign == 1 ? INT_MAX : INT_MIN;
            }

            result = result * 10 + digit;
            i++;
        }

        return result * sign;
    }

    bool isDigit(char c)
    {
        return c >= '0' && c <= '9';
    }
};

int main()
{
    Solution solution;

    int result = solution.myAtoi("42");
    cout << result << endl;

    result = solution.myAtoi(" -42");
    cout << result << endl;

    result = solution.myAtoi("1337c0d3");
    cout << result << endl;

    result = solution.myAtoi("0-1");
    cout << result << endl;

    result = solution.myAtoi("words and 987");
    cout << result << endl;
    return 0;
}