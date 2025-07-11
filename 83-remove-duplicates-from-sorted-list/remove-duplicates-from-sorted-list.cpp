class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head || !head->next)
            return head;

        ListNode* current = head;

        while (current && current->next) {
            if (current->val == current->next->val) {
                // Duplicate found, skip it
                current->next = current->next->next;
            } else {
                current = current->next;
            }
        }

        return head;
    }
};
