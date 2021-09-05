//
// Created by darre on 2021/9/1.
//

class Solution {
public:
    ListNode *middleNode(ListNode *head) {
        auto current = head;
        int length = 1;

        while (current->next) {
            length++;
            current = current->next;
        }

        current = head;
        int mid = length / 2;
        for (int i = 0; i < mid; i++) {

            current = current->next;
        }

        return current;
    }
};