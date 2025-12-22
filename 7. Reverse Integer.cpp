#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int reverse(int x)
    {
        int result = 0;

        while (x != 0)
        {
            int digit = x % 10;
            x /= 10;

            if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > 7))
                return 0;
            if (result < INT_MIN / 10 || (result == INT_MIN / 10 && digit < -8))
                return 0;

            result = result * 10 + digit;
        }

        return result;
    }
};

int main()
{
    Solution solution;

    int result = solution.reverse(1534236469);
    cout << result << endl;
    result = solution.reverse(-123);
    cout << result << endl;
    result = solution.reverse(120);
    cout << result << endl;
    return 0;
}
