#include "./lib/stdc++.h"
using namespace std;

class Solution
{
public:
    vector<string> letterCombinations(string digits)
    {
        if (digits.empty())
        {
            return {};
        }

        vector<string> mapping = {
            "", "", "abc", "def", "ghi",
            "jkl", "mno", "pqrs", "tuv", "wxyz"};

        vector<string> result, temp = {};
        int len = digits.size();

        for (int i = 0; i < len; i++)
        {
            int digit = digits[i] - '0';
            if (result.size() == 0)
            {
                for (char c : mapping[digit])
                {
                    result.push_back(string(1, c));
                }
            }
            else
            {
                for (int j = 0; j < result.size(); j++)
                {
                    for (char c : mapping[digit])
                    {
                        temp.push_back(result[j] + string(1, c));
                    }
                }
                result = temp;
                temp.clear();
            }
        }
        return result;
    }
};

int main()
{
    Solution solution;
    vector<string> result = solution.letterCombinations("22");
    for (const string &combination : result)
    {
        cout << combination << " ";
    }
    return 0;
}