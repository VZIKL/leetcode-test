// File Name: Maximum-Depth-of-binary-tree.cpp
// Author:
// Mail:
// Created Time: 2016年11月14日 星期一 17时47分22秒
#include <iostream>
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
 public:
  int maxDepth(TreeNode *root) {
    if (root == NULL) {
      return 0;
    }
    int left_max = maxDepth(root->left);
    int right_max = maxDepth(root->right);
    return std::max(left_max, right_max) + 1;
  }
};
