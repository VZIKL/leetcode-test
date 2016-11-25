// File Name: reverse-linked-list.cpp
// Author:
// Mail:
// Created Time: 2016年11月25日 星期五 16时33分03秒
#include <iostream>
struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
 public:
  ListNode *reverseList(ListNode *head) {
    ListNode *result = NULL;
    ListNode *s = head;
    ListNode *next;
    while (s != NULL) {
      next = s->next;
      s->next = result;
      result = s;
      s = next;
    }
    return result;
  }
};
