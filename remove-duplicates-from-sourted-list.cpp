// File Name: remove-duplicates-from-sourted-list.cpp
// Author:
// Mail:
// Created Time: 2016年12月10日 星期六 17时49分02秒
#include <iostream>
struct ListNode {
  int val;
  ListNode* next;
  ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
 public:
  ListNode* deleteDuplicates(ListNode* head) {
    if (head == NULL || head->next == NULL) return head;
    ListNode* result = head;
    while (head->next) {
      if (head->val == head->next->val)
        head->next = head->next->next;
      else
        head = head->next;
    }
    return result;
  }
};
