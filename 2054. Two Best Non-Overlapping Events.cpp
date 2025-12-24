#include "./lib/stdc++.h"
using namespace std;

class Solution
{
public:
    int maxTwoEvents(vector<vector<int>> &events)
    {
        int n = events.size();

        sort(events.begin(), events.end());

        vector<int> suffixMax(n);
        suffixMax[n - 1] = events[n - 1][2];
        for (int i = n - 2; i >= 0; --i)
        {
            suffixMax[i] = max(suffixMax[i + 1], events[i][2]);
        }

        int ans = 0;

        for (int i = 0; i < n; ++i)
        {
            int value = events[i][2];
            ans = max(ans, value);

            int l = i + 1, r = n - 1, pos = -1;
            while (l <= r)
            {
                int mid = (l + r) / 2;
                if (events[mid][0] > events[i][1])
                {
                    pos = mid;
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }

            if (pos != -1)
            {
                ans = max(ans, value + suffixMax[pos]);
            }
        }

        return ans;
    }
};

int main()
{
    Solution solution;
    vector<vector<int>> events1 = {{1, 3, 2}, {4, 5, 2}, {2, 4, 3}};
    int result1 = solution.maxTwoEvents(events1);
    cout << result1 << endl;

    return 0;
}