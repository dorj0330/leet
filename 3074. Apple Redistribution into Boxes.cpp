#include "./lib/stdc++.h"
using namespace std;

class Solution
{
public:
    int minimumBoxes(vector<int> &apple, vector<int> &capacity)
    {
        sort(capacity.begin(), capacity.end());
        int len = capacity.size(), sum = accumulate(apple.begin(), apple.end(), 0), count = 0;

        for (int i = len - 1; i >= 0 && sum > 0; --i)
        {
            sum -= capacity[i];
            count++;
        }
        return count;
    }
};

int main()
{
    Solution solution;
    vector<int> apple = {5, 5, 5};
    vector<int> capacity = {2, 4, 2, 7};
    int result1 = solution.minimumBoxes(apple, capacity);
    cout << result1 << endl;

    return 0;
}