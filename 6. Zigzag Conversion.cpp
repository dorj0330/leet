#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string convert(string s, int numRows)
    {
        int n = (int)s.size();
        if (numRows == 1 || numRows >= n) return s;

        string result;
        result.reserve(n);

        int step = (numRows - 1) * 2;

        for (int i = 0; i < numRows; i++)
        {
            for (int j = 0; j < n; j += step)
            {
                int idx1 = j + i;
                if (idx1 < n) result.push_back(s[idx1]);

                int idx2 = j + step - i;
                if (i != 0 && i != numRows - 1 && idx2 < n)
                    result.push_back(s[idx2]);
            }
        }
        return result;
    }
};

int main()
{
    Solution solution;
    string s = "PAYPALISHIRING";
    int numRows = 3;

    string result = solution.convert(s, numRows);
    cout << result << endl;          // PAHNAPLSIIGYIR
    cout << "PAHNAPLSIIGYIR" << endl;
    return 0;
}
