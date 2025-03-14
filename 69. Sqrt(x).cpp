#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int mySqrt(int n)
    {

        if (n == 0 || n == 1)
            return n;

        double x = n, precision = 1e-6;
        double root;
        int result;

        while (true)
        {
            root = 0.5 * (x + n / x);
            if (abs(root - x) < precision)
                break;
            x = root;
        }
        result = root;

        return result;
    }
};

int main()
{
    Solution solution;

    int result = solution.mySqrt(4);
    cout << result << endl;

    result = solution.mySqrt(8);
    cout << result << endl;

    return 0;
}