#include "./lib/stdc++.h"
using namespace std;

class Solution
{
public:
    string convertToTitle(int columnNumber)
    {
        string result;
        int div;
        while (columnNumber > 0)
        {
            div = columnNumber % 26;
            columnNumber = columnNumber / 26;
            if (div == 0)
            {
                result = 'Z' + result;
                columnNumber--;
            }
            else
            {
                result = static_cast<char>(div + 64) + result;
            }
        }
        return result;
    }
};

int main()
{
    Solution solution;
    string result;
    result = solution.convertToTitle(1);
    cout << result << endl;

    result = solution.convertToTitle(28);
    cout << result << endl;

    result = solution.convertToTitle(701);
    cout << result << endl;
    return 0;
}