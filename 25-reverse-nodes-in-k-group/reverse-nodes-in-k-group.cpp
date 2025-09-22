class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* cur = head;
        int count = 0;
        while (cur && count < k) {
            cur = cur->next;
            count++;
        }
        if (count < k) return head;

        ListNode* prev = NULL;
        cur = head;
        for (int i = 0; i < k; i++) {
            ListNode* nxt = cur->next;
            cur->next = prev;
            prev = cur;
            cur = nxt;
        }
        head->next = reverseKGroup(cur, k);
        return prev;
    }
};
