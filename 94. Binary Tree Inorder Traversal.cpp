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
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> result;
        inorderHelper(root, result);
        return result;
    }

private:
    void inorderHelper(TreeNode *root, vector<int> &result)
    {
        if (root == nullptr)
            return;
        inorderHelper(root->left, result);
        result.push_back(root->val);
        inorderHelper(root->right, result);
    }
};

int main()
{
    // Test case 1: root = [1, null, 2, 3]
    TreeNode *root1 = new TreeNode(1);
    root1->right = new TreeNode(2);
    root1->right->left = new TreeNode(3);

    Solution sol;
    vector<int> result1 = sol.inorderTraversal(root1);
    for (int val : result1)
        cout << val << " ";
    cout << endl;

    // Test case 2: root = [1, 2, 3, 4, 5, null, 8, null, null, 6, 7, 9]
    TreeNode *root2 = new TreeNode(1);
    root2->left = new TreeNode(2);
    root2->left->left = new TreeNode(4);
    root2->left->right = new TreeNode(5);
    root2->left->right->left = new TreeNode(6);
    root2->left->right->right = new TreeNode(7);
    root2->right = new TreeNode(3);
    root2->right->right = new TreeNode(8);
    root2->right->right->left = new TreeNode(9);

    vector<int> result2 = sol.inorderTraversal(root2);
    for (int val : result2)
        cout << val << " ";
    cout << endl;

    // Test case 3: root = []
    TreeNode *root3 = nullptr;
    vector<int> result3 = sol.inorderTraversal(root3);
    for (int val : result3)
        cout << val << " ";
    cout << endl;

    // Test case 4: root = [1]
    TreeNode *root4 = new TreeNode(1);
    vector<int> result4 = sol.inorderTraversal(root4);
    for (int val : result4)
        cout << val << " ";
    cout << endl;

    return 0;
}