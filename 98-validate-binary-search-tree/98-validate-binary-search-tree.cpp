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
/*
                BST = left<=value<=right
    5           for left = left<=root<=root-up
   / \          for right = 
  1   4
     / \
    3   5
*/

class Solution {
public:
    
    bool isValidBST(TreeNode* root) {
        long long int mx = 2e18+123;
        // cout<<mx<<endl;
        return isValid(root,-mx,mx);
        
    }
    bool isValid(TreeNode* root,long long int left,long long int right){
        // cout<<root->val<<" "<<left<<" "<<right<<endl; 
        if(root==NULL)
            return true;
        if(root->val<=left || root->val>=right)
            return false;
        return (isValid(root->left,left,root->val) && isValid(root->right,root->val,right));
    }
};