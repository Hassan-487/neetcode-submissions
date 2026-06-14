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
    int maxDepth(TreeNode* root) {
      stack<pair<TreeNode*,int>> stk;
      stk.push({root,1});
      int res=0;

      while(!stk.empty()){
        pair<TreeNode*,int> curr=stk.top();
        stk.pop();
        if(curr.first!=nullptr){
            res=max(res,curr.second);
            stk.push({curr.first->left,curr.second+1});
            stk.push({curr.first->right,curr.second+1});
        }
      }
      return res;
    }
};
