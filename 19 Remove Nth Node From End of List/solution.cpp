//
// Created by darre on 2021/9/1.
//
class Solution {
public:
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        ListNode *current = head;
        int len = 0;

        while (current) {
            current = current->next;
            len++;
        }

        if (len == n) {
            return head->next;
        };

        current = head;

        for (int i = 1; i < len - n; i++) {
            current = current->next;
        }

        current->next = current->next->next;

        return head;
    }
};

