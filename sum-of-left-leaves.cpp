// File Name: sum-of-left-leaves.cpp
// Author:
// Mail:
// Created Time: 2016年11月16日 星期三 04时07分38秒
#include <iostream>
struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
 public:
  int sumOfLeftLeaves(TreeNode* root) {
    if (!root) {
      return 0;
    }
    if (root->left && !root->left->left && !root->left->right) {
      return root->left->val + sumOfLeftLeaves(root->right);
    }
    return sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);
  }
};
