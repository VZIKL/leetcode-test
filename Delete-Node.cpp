// File Name: Delete-Node.cpp
// Author:
// Mail:
// Created Time: 2016年11月16日 星期三 14时54分05秒
#include <iostream>
struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
 public:
  void deleteNode(ListNode *node) {
    node->val = node->next->val;
    node->next = node->next->next;
  }
};
