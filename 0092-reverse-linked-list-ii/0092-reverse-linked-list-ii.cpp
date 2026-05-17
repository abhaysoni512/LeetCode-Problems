class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        if (!head || left == right)
            return head;

        ListNode* curr = head;
        ListNode* before = nullptr;

        int pos = 1;

        // Move curr to 'left' position
        while (pos < left) {
            before = curr;
            curr = curr->next;
            pos++;
        }

        // 'tail' will become the tail after reversal
        ListNode* tail = curr;
        ListNode* prev = nullptr;

        int times = right - left + 1;

        // Reverse sublist
        while (times--) {
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }

        // Connect reversed part with remaining list
        tail->next = curr;

        if (before)
            before->next = prev;
        else
            head = prev;

        return head;
    }
};