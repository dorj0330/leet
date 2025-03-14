#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int climbStairs(int n)
    {
        if (n == 1)
        {
            return 1;
        }
        if (n == 2)
        {
            return 2;
        }
        int temp, first = 1, second = 2, way;
        for (int i = 3; i <= n; i++)
        {
            way = first + second;
            first = second;
            second = way;
        }
        return way;
    }
};

int main()
{
    Solution solution;

    int result = solution.climbStairs(45);
    cout << result << endl;

    result = solution.climbStairs(5);
    cout << result << endl;

    return 0;
}