#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
    }
};

int main()
{
    Solution solution;

    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int result = solution.maxProfit(prices);
    cout << result << endl;

    prices = {7, 6, 4, 3, 1};
    int result = solution.maxProfit(prices);
    cout << result << endl;

    return 0;
}