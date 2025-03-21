#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string addBinary(string a, string b)
    {
        int carry = 0;
        string result = "";

        int i = a.size() - 1, j = b.size() - 1;

        while (i >= 0 || j >= 0 || carry)
        {
            int sum = carry;

            if (i >= 0)
                sum += a[i--] - '0';
            if (j >= 0)
                sum += b[j--] - '0';

            result = char((sum % 2) + '0') + result;
            carry = sum / 2;
        }
        return result;
    }
};
int main()
{
    Solution solution;

    string result = solution.addBinary("11", "1");
    cout << result << endl;

    result = solution.addBinary("1011", "1010");
    cout << result << endl;

    return 0;
}