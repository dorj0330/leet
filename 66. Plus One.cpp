#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        for (int i = digits.size() - 1; i >= 0; i--)
        {
            if (digits[i] < 9)
            {
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
int main()
{
    Solution solution;

    vector<int> digits = {1, 2, 3};
    vector<int> result = solution.plusOne(digits);

    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    digits = {4, 3, 2, 1};
    result = solution.plusOne(digits);

    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;
    digits = {9};
    result = solution.plusOne(digits);

    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}