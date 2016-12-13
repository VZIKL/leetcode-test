// File Name: linked-list-cycle.cpp
// Author:
// Mail:
// Created Time: 2016年12月14日 星期三 00时17分28秒
#include <iostream>
struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
 public:
  bool hasCycle(ListNode *head) {
    ListNode *fast = head, *slow = head;
    if (!head || !head->next) return NULL;
    while (1) {
      if (!fast) return false;
      fast = fast->next;
      if (!fast) return false;
      if (fast == slow) return true;
      fast = fast->next;
      if (!fast) return false;
      if (fast == slow) return true;
      slow = slow->next;
      if (!slow) return false;
      if (fast == slow) return true;
    }
  }
};
