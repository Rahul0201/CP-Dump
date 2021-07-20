/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    TreeNode *cur = NULL;
public:
    bool isValidBST(TreeNode* root) {
        if(root){
            if( !isValidBST(root->left) ) return false;
            if( !cur || root->val > cur->val) cur = root;
            else return false;
            if( !isValidBST(root->right) ) return false;   
        }
        return true;
    }
};