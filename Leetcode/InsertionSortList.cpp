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
    ListNode* insertionSortList(ListNode* head) {
        ios_base::sync_with_stdio(false);
        if(!head->next) return head;
        
        ListNode *cur = head->next, *start=head;
        head->next = NULL;
        ListNode *temp = cur;
        while(cur){
            temp = cur;
            cur = cur->next;
            temp->next = NULL;
            
            if(temp->val < head->val){
                temp->next = head;
                head = temp;
                continue;   
            }
            
            start = head;
            while(start->next && start->next->val < temp->val ) start = start->next;
            if(!(start->next==temp)){ 
                temp->next = start->next;
                start->next = temp;
            }  
        }

        return head;
    }
};