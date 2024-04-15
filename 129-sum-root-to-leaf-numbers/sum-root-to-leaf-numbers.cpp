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
    int sumNumbers(TreeNode* root) {
        return solve(root, 0);  
    }

    int solve(TreeNode* root, int res){
        if(root == NULL)
            return 0;

        res = (res * 10) + root->val;

        if(!root->left && !root->right)
            return res;

        res = solve(root->left, res) + solve(root->right, res);
        return res;
    }
};