#include "./lib/stdc++.h"
using namespace std;

class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> merged;
        float median;
        int i = 0, j = 0;

        while (i < nums1.size() && j < nums2.size())
        {
            if (nums1[i] < nums2[j])
            {
                merged.push_back(nums1[i]);
                i++;
            }
            else
            {
                merged.push_back(nums2[j]);
                j++;
            }
        }

        while (i < nums1.size())
        {
            merged.push_back(nums1[i]);
            i++;
        }

        while (j < nums2.size())
        {
            merged.push_back(nums2[j]);
            j++;
        }

        int merged_len = merged.size();

        if (merged_len % 2 == 0)
        {
            median = (merged[merged_len / 2 - 1] + merged[merged_len / 2]) / 2.0;
        }
        else
        {
            median = merged[merged_len / 2];
        }
        return median;
    };
};

int main()
{
    Solution solution;
    double result;

    vector<int> a = {1, 3};
    vector<int> b = {2};

    result = solution.findMedianSortedArrays(a, b);
    cout << result << endl;

    a = {1, 2};
    b = {3, 4};

    result = solution.findMedianSortedArrays(a, b);
    cout << result << endl;

    return 0;
}