// File Name: Invert-binary-tree.cpp
// Author:
// Mail:
// Created Time: 2016年11月15日 星期二 06时38分50秒
#include <iostream>
// Definition for a binary tree node.
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
 public:
  TreeNode *invertTree(TreeNode *root) {
    if (!root) {
      return NULL;
    }
    TreeNode *tmp = root->right;
    root->right = invertTree(root->left);
    root->left = invertTree(tmp);
    return root;
  }
};
