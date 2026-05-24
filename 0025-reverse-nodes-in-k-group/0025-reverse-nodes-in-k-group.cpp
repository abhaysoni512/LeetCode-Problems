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
#define Node ListNode
#define null NULL
    Node* reverse(ListNode* head, int size){
        // 100-->200
        ListNode* curr = head; // curr = 100
        ListNode* prev = NULL;  // prev = NULL
        while(size--){
            ListNode* tmp = curr->next; // tmp = 200 // tmp = null
            curr->next = prev;          // 100->next = null // 200->next = 100
            prev = curr;                // prev = 100 // prev = 200
            curr = tmp;                 // curr = 200 // curr = null
        }
        return prev;
    }
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == null || head->next == null) return head;

        Node* left = head;
        Node* res = null;
        Node* prevleft = null;
        Node* right;
        int size = k; // minimum we have two nodes
        while(true){
            right = left;
            for(int i=0; i<size-1; ++i){
                if(right == null) break;
                right = right->next;
            }
            if(right){
                Node* nextleft = right->next;
                right = reverse(left, size);
                if(prevleft){
                    prevleft->next = right;
                }
                prevleft = left;
                left = nextleft;
                if(res == null) res = right;
            } else{
                prevleft->next = left;
                break;
            }
        }
        return res;
    }
};