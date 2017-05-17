// File Name: insertion-sort-list.cpp
// Author:
// Mail:
// Created Time: 2017年05月17日 星期三 21时17分27秒
#include <iostream>
struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
 public:
  ListNode *insertionSortList(ListNode *head) {
    ListNode *result = new ListNode(0);
    while (head != NULL) {
      ListNode *tmp = result;
      ListNode *next = head->next;
      while (tmp->next != NULL && tmp->next->val < head->val) {
        tmp = tmp->next;
      }
      head->next = tmp->next;
      tmp->next = head;
      head = next;
    }
    return result->next;
  }
};
