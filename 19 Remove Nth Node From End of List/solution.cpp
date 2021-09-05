//
// Created by darre on 2021/9/1.
//
class Solution {
public:
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        ListNode *current = head;
        int len = 1;

        while (current->next) {
            current = current->next;
            len++;
        }

        if (len == n) {
            return head->next;
        };

        current = head;

        for (int i = 0; i < len - n - 1; i++) {
            current = current->next;
        }

        current->next = current->next->next;

        return head;
    }
};


