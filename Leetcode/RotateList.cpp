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
    ListNode* rotateRight(ListNode* head, int k) {
        ios::sync_with_stdio(false);
        if (head == NULL) return head;
        
        ListNode *temp = head, *tail = head;
        int size=0;
        while(temp->next){
            size++;
            temp = temp->next;
            tail = tail->next;
        }
        if(size == 0) return head;
        size++;
        
        int index = size - k%size - 1;
        if( (index+1)%size == 0) return head;
        
        tail->next = head;
        temp = head;
        while(index--){ 
            temp = temp->next;
        }
        
        ListNode* new_head = temp->next;
        temp->next = NULL;
        cout << "full\n";
        return new_head;
        
    }
};