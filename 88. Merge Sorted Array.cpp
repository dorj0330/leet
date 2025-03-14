#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        if (n == 0)
        {
            return;
        }
        if (m == 0)
        {
            nums1 = nums2;
            return;
        }
        int i = 0, j = 0;
        vector<int> nums3(n + m);
        while (i < m && j < n)
        {
            if (nums1[i] <= nums2[j])
            {
                nums3[i + j] = nums1[i];
                i++;
            }
            else
            {
                nums3[i + j] = nums2[j];
                j++;
            }
        }
        while (i < m)
        {
            nums3[i + j] = nums1[i];
            i++;
        }
        while (j < n)
        {
            nums3[i + j] = nums2[j];
            j++;
        }

        nums1 = nums3;
    }
};
int main()
{
    Solution solution;
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    solution.merge(nums1, 3, nums2, 3);
    for (int num : nums1)
    {
        cout << num << " ";
    }
    cout << endl;

    nums1 = {1};
    nums2 = {};
    solution.merge(nums1, 1, nums2, 0);
    for (int num : nums1)
    {
        cout << num << " ";
    }
    cout << endl;

    nums1 = {0};
    nums2 = {1, 2};
    solution.merge(nums1, 0, nums2, 2);
    for (int num : nums1)
    {
        cout << num << " ";
    }
}
