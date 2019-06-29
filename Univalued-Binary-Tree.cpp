//File Name: Univalued-Binary-Tree.cpp
//Author:
//Mail:
//Created Time: 六  6/29 16:47:54 2019
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isUnivalTree(TreeNode* root)
    {
        int val = root->val;
        return iUT(root, val);
    }
    bool iUT(TreeNode* root, int x)
    {
        if (root == NULL) {
            return true;
        }
        if (root->val != x) {
            return false;
        }
        return iUT(root->left, x) && iUT(root->right, x);
    }
};
