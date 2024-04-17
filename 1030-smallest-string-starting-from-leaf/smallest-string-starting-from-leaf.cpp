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
    string smallestFromLeaf(TreeNode* root) {
        string ans = "", curr = "";
        dfs(root, ans, curr);
        return ans;
    }

    void dfs(TreeNode* root, string &ans, string curr){
        if(root==NULL)
            return;

        curr = (char)(root->val + 'a') + curr;

        if(root->left == NULL && root->right == NULL){
            if(ans == "" || ans > curr){
                ans = curr;
            }
        }

        dfs(root->left, ans, curr);
        dfs(root->right, ans, curr);
    }
};