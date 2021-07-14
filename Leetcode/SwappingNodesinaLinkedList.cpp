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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *Kfrombeg = head;
        while(--k){
            Kfrombeg = Kfrombeg->next;
        }
        ListNode *Kfromend = head;
        ListNode* temp = Kfrombeg;
        while(temp->next){
            temp = temp->next;
            Kfromend = Kfromend->next;
        }
        swap(Kfrombeg->val,Kfromend->val);
        return head; 
    
    }
};