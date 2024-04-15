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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL)
            return false;
        return solve(root, 0, targetSum);
    }

    bool solve(TreeNode* root, int res, int targetSum){
        if(root==NULL){
            // cout<<res<<endl;
            return false;
        }

        res += root->val;

        if(!root->left && !root->right){
            // cout<<res<<endl;
            return res == targetSum;
        }
        return solve(root->left, res, targetSum) | solve(root->right, res, targetSum);
    }
};