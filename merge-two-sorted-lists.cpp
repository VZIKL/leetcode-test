// File Name: merge-two-sorted-lists.cpp
// Author:
// Mail:
// Created Time: 2016年12月13日 星期二 16时28分11秒
#include <iostream>
struct ListNode {
  int val;
  ListNode* next;
  ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
 public:
  ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    if (l1 == NULL) {
      return l2;
    }
    if (l2 == NULL) {
      return l1;
    }
    ListNode* result = NULL;
    if (l1->val < l2->val) {
      result = l1;
      result->next = mergeTwoLists(l1->next, l2);
    } else {
      result = l2;
      result->next = mergeTwoLists(l1, l2->next);
    }
    return result;
  }
};
