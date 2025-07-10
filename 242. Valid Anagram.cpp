#include "./lib/stdc++.h"
using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.length() != t.length())
        {
            return false;
        }

        int letters_count[26] = {0};

        for (int i = 0; i < s.length(); i++)
        {
            letters_count[s[i] - 'a']++;
            letters_count[t[i] - 'a']--;
        }

        for (int i = 0; i < 26; i++)
        {
            if (letters_count[i] != 0)
                return false;
        }

        return true;
    }
};

int main()
{
    Solution solution;
    bool result;
    result = solution.isAnagram("anagram", "nagarat");
    cout << result << endl;

    return 0;
}