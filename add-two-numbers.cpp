class Solution {
 public:
  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* l3 = NULL;
    ListNode* q = NULL;
    int sum = 0;
    int add = 0;
    while (l1 || l2 || add > 0) {
      if (l1 == NULL && l2 == NULL) {
        sum = 0;
        l1 = l1->next;
        l2 = l2->next;
      } else if (l1 == NULL) {
        sum = l2->val;
        l2 = l2->next;
      } else if (l2 == NULL) {
        sum = l1->val;
        l1 = l1->next;
      } else {
        sum = l2->val + l1->val;
        l1 = l1->next;
        l2 = l2->next;
      }
      sum += add;
      ListNode* p = new ListNode(sum % 10);
      add = sum / 10;
      if (l3 == NULL) {
        l3 = p;
      }
      if (q != NULL) {
        q->next = p;
      }
      q = p;
    }
    return l3;
  }
};
