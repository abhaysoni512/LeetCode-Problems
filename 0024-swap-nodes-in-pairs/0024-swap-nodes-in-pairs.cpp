/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */


class Solution {
public:
    void reverse(ListNode* head, int size){
        // 100-->200
        ListNode* curr = head; // curr = 100
        ListNode* prev = NULL;  // prev = NULL
        while(size--){
            ListNode* tmp = curr->next; // tmp = 200 // tmp = null
            curr->next = prev;          // 100->next = null // 200->next = 100
            prev = curr;                // prev = 100 // prev = 200
            curr = tmp;                 // curr = 200 // curr = null
        }
    }
    ListNode* swapPairs(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return head;

        ListNode* left = head;
        ListNode* res = left->next; // as we are sure that we have two nodes atleast return res = 2nd node
        ListNode* prevleft = NULL;
        ListNode* right;
        int size = 2;

        // 1) 100 --> 200;
        while(true){
            right = left; // right = 100
            for(int i=0; i<(size-1); ++i){
                if(right == NULL) break;
                right = right->next; // right=200;
            }

            if(right){
                ListNode* nextleft = right->next; // nextleft = 
                reverse(left,size);
                if(prevleft) prevleft->next = right;
                prevleft = left;
                left = nextleft;
            }else{
                prevleft->next = left;
                break;
            }
        }
         return res;
    }
};

