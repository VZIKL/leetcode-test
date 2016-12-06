// File Name: remove-linked-list-elements.cpp
// Author:
// Mail:
// Created Time: 2016年12月06日 星期二 13时11分04秒
#include <iostream>
struct ListNode {
  int val;
  ListNode* next;
  ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
 public:
  ListNode* removeElements(ListNode* head, int val) {
    if (head == NULL) return NULL;
    head->next = removeElements(head->next, val);
    return head->val == val ? head->next : head;
  }
};
