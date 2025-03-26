#include "./lib/stdc++.h"
using namespace std;

class Solution
{
public:
    int titleToNumber(string columnTitle)
    {
        int result = 0;
        for (int i = columnTitle.size() - 1; i >= 0; i--)
        {
            result = (columnTitle[i] - 64) * (pow(26, columnTitle.size() - 1 - i)) + result;
        }
        return result;
    }
};

int main()
{
    Solution solution;
    int result;
    result = solution.titleToNumber("A");
    cout << result << endl;

    result = solution.titleToNumber("AB");
    cout << result << endl;

    result = solution.titleToNumber("ZY");
    cout << result << endl;
    return 0;
}