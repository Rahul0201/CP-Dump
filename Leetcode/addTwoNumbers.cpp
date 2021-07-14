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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        int digit;
        ListNode* result = new ListNode();
        ListNode *current;
        current = result;
        bool hasl1=true, hasl2=true;
        
        do{ 
            int val1 = 0, val2 = 0;
            if(hasl1) val1 = l1->val;
            if(hasl2) val2 = l2->val;
            
            
            digit = (val1 + val2 + carry)%10;
            carry = (val1 + val2 + carry)/10;
            
            ListNode* temp = new ListNode(digit);
            current->next = temp;
            current = temp;
            
            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
            
            if(!l1) hasl1 = false;
            if(!l2) hasl2 = false;
             
        }while( (l1 != NULL || l2 != NULL) || carry != 0);
            
        return result->next;
    }
};