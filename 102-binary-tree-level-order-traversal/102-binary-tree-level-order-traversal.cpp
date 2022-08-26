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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>v;
        if(root==NULL)
            return v;
        
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty()){
            int x = q.size();
            vector<int>curr;
            
            for(int i=0;i<x;i++){
                TreeNode* temp = q.front();
                q.pop();
                curr.push_back(temp->val);
                if(temp->left!=NULL)
                    q.push(temp->left);
                if(temp->right!=NULL)
                    q.push(temp->right);
            }
            v.push_back(curr);
            
        }
        return v;
    }
    
};