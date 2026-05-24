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
#define node ListNode
#define null NULL
    int noOfNode(ListNode* head){
        int n = 0;
        node* tmp{head};
        while(tmp){
            tmp = tmp->next;
            n++;
        }
        return n;
    }
public:

    ListNode* rotateRight(ListNode* head, int k) {
        if(head == null) return head;
        
        int n = noOfNode(head);
        k = k%n;
        node* last = null;
        node* tmp = head;
        node* nMinusk = null;
        node* nMinuskAddOne = null;

        
        for(int i = 1; i<=n; ++i){
            if(i == n) last= tmp;
            if(i == n-k ) nMinusk = tmp;
            tmp = tmp->next;
        }

        // s1. last->next = head;
        last->next = head;

        // s2 head ko n-k+1 th node
        head = nMinusk->next;

        // s3 n-k th node next = null
        nMinusk->next = null;


        return head;



    }
};