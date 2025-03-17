#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    bool hasPathSum(TreeNode *root, int targetSum)
    {
        return helper(root, 0, targetSum);
    }

private:
    bool helper(TreeNode *root, int sum, int targetSum)
    {
        if (!root)
            return false;

        sum += root->val;

        if (!root->left && !root->right)
            return sum == targetSum;

        return helper(root->left, sum, targetSum) || helper(root->right, sum, targetSum);
    }
};
