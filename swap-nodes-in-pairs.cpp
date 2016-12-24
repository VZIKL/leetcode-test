// File Name: swap-nodes-in-pairs.cpp
// Author:
// Mail:
// Created Time: 2016年12月24日 星期六 23时34分38秒
#include <iostream>
struct ListNode {
  int val;
  ListNode* next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
 public:
  ListNode* swapPairs(ListNode* head) {
    if (head == NULL || head->next == NULL) return head;
    ListNode* tmp = swapPairs(head->next->next);
    ListNode* result = head->next;
    result->next = head;
    result->next->next = tmp;
    return result;
  }
};
