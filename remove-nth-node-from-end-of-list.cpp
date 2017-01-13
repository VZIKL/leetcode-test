// File Name: remove-nth-node-from-end-of-list.cpp
// Author:
// Mail:
// Created Time: 2017年01月09日 星期五 23时17分56秒
#include <iostream>
struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL||head->next==NULL)return NULL;
        ListNode *one = head;
        ListNode *two = head;
        for(int i = 0 ;i<n;i++){
            one = one->next;
        }
        if(one==NULL){
            return head->next;
        }
        while(one->next!=NULL){
            one = one->next;
            two = two ->next;
        }
        two->next = two->next->next;
        return head;
    }
};
