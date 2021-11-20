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
    vector<int> nextLargerNodes(ListNode* head) {
        stack<pair<int,int>> stk;
        vector<int> result(0);
        ListNode *cur = head;
        int count = 0;
        
        while(cur){
            // cout<<" "<<cur->val<<endl;
            result.push_back(0);
            if(stk.empty()){
                stk.push({cur->val,count});
                count++;
                cur = cur->next;
                continue;
            }
            while(!stk.empty() && stk.top().first < cur->val){
                // cout << stk.top().first<<endl;
                pair<int,int> temp = stk.top();
                stk.pop();
                result[temp.second] = cur->val;
                
            }
            stk.push({cur->val,count});
            count++;
            cur = cur->next;   
        }
        return result;
        
    }
};