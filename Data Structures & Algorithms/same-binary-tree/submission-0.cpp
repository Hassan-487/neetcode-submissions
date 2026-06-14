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
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        stack<pair<TreeNode* ,TreeNode* >>stk;
        stk.push({p,q});
        while(!stk.empty()){
            pair<TreeNode*,TreeNode*> curr=stk.top();
            stk.pop();
            if(curr.first == nullptr && curr.second == nullptr)
                 continue;

                if(curr.first == nullptr || curr.second == nullptr)
                     return false;
            if (curr.first->val==curr.second->val){
                stk.push({curr.first->left,curr.second->left});
                stk.push({curr.first->right,curr.second->right});
            }
            else{
                return false;
            }
        }
        return true;
    }
};
