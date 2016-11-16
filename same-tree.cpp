// File Name: same-tree.cpp
// Author:
// Mail:
// Created Time: 2016年11月16日 星期三 23时47分27秒
#include <iostream>
struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
 public:
  bool isSameTree(TreeNode* p, TreeNode* q) {
    if (p == NULL && q == NULL) {
      return true;
    } else if (p == NULL || q == NULL) {
      return false;
    }
    return p->val == q->val && isSameTree(p->left, q->left) &&
           isSameTree(p->left, q->left);
  }
};
