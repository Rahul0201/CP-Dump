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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = 1;
        int position;
        ListNode *current = head;
        while(current->next){
            size++;
            current = current->next;
        }        
        position = size-n;        
        if(!position) return head->next;        
        ListNode *prev = head;
        current = head->next;
        for(int i=1; i<position; i++){
            current = current->next;
            prev = prev->next;
        }
        prev->next = current->next;
        return head;
    }
};