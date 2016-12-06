// File Name: Minimum-Depth-of-binary-tree.cpp
// Author:
// Mail:
// Created Time: 2016年12月06日 星期二 14时31分23秒
#include <iostream>
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
 public:
  int minDepth(TreeNode *root) {
    if (root == NULL) {
      return 0;
    }
    if (root->left == NULL) return minDepth(root->right) + 1;
    if (root->right == NULL) return minDepth(root->left) + 1;
    int left_len = minDepth(root->left);
    int right_len = minDepth(root->right);
    return std::min(left_len, right_len) + 1;
  }
};
