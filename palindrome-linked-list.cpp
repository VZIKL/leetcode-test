// File Name: palindrome-linked-list.cpp
// Author:
// Mail:
// Created Time: 2017年1月15日 星期日 22时39分02秒
#include <iostream>
struct ListNode {
  int val;
  ListNode* next;
  ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
private:
    ListNode *list;
public:
    bool compare(ListNode* head){
        if(head==NULL)return true;
        if(compare(head->next)==false)return false;
        if(list->val != head->val)return false;
        else{
            list = list->next;
            return true;
        }
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL||head->next == NULL)return true;
        list = head;
        return compare(head);
    }
};
