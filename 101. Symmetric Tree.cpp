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

// class Solution
// {
// public:
//     bool isSymmetric(TreeNode *root)
//     {
//         return isSymmetricHelper(root->left, roo);
//     }

// private:
//     bool isSymmetricHelper(TreeNode *root1, TreeNode *root2)
//     {
//         if (!root1 && !root2)
//             return true;

//         if (!root1 || !root2)
//             return false;

//         if (root1->val != root2->val)
//             return false;

//         return isSymmetricHelper(root1->left, root2->right) && isSymmetricHelper(root1->right, root2->left);
//     }
// };
