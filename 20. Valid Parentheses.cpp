#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        int i = 0;
        stack<char> charStack;
        while (i < s.size())
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                charStack.push(s[i]);
            else
            {
                if (charStack.empty() ||
                    (s[i] == ')' && charStack.top() != '(') ||
                    (s[i] == '}' && charStack.top() != '{') ||
                    (s[i] == ']' && charStack.top() != '['))
                    return false;
                charStack.pop();
            }
            i++;
        }
        return charStack.empty();
    }
};
int main()
{
    Solution solution;
    bool output;

    output = solution.isValid("()[]{}");
    cout << output;

    return 0;
}