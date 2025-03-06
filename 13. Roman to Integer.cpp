#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        int i = 0, sum = 0;
        while (i < s.size())
        {
            if (s[i] == 'I')
            {
                sum = sum + 1;
            }
            if (s[i] == 'V')
            {
                sum = sum + 5;
                if (i > 0 && s[i - 1] == 'I')
                {
                    sum = sum - 2;
                }
            }
            if (s[i] == 'X')
            {
                sum = sum + 10;
                if (i > 0 && s[i - 1] == 'I')
                {
                    sum = sum - 2;
                }
            }
            if (s[i] == 'L')
            {
                sum = sum + 50;
                if (i > 0 && s[i - 1] == 'X')
                {
                    sum = sum - 20;
                }
            }
            if (s[i] == 'C')
            {
                sum = sum + 100;
                if (i > 0 && s[i - 1] == 'X')
                {
                    sum = sum - 20;
                }
            }
            if (s[i] == 'D')
            {
                sum = sum + 500;
                if (i > 0 && s[i - 1] == 'C')
                {
                    sum = sum - 200;
                }
            }
            if (s[i] == 'M')
            {
                sum = sum + 1000;
                if (i > 0 && s[i - 1] == 'C')
                {
                    sum = sum - 200;
                }
            }
            i++;
        }
        return sum;
    }
};

int main()
{
    Solution solution;
    int output;

    output = solution.romanToInt("MCMXCIV");
    cout << output;

    return 0;
}