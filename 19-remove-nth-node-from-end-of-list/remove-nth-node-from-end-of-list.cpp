class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // dummy node (use constructor provided by LeetCode's ListNode)
        ListNode dummy(0);
        dummy.next = head;
        ListNode* first = &dummy;
        ListNode* second = &dummy;

        // move first n+1 steps ahead to keep gap of n between first & second
        for (int i = 0; i <= n; ++i) {
            first = first->next;
        }

        // advance both until first reaches end
        while (first) {
            first = first->next;
            second = second->next;
        }

        // remove second->next
        second->next = second->next->next;
        return dummy.next;
    }
};
