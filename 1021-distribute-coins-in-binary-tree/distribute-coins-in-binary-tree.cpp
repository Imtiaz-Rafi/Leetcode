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
    int distributeCoins(TreeNode* root) {
        TreeNode dummy;
        return dfs(root, &dummy);
    }
    int dfs(TreeNode* cur_node, TreeNode* parent) {
        if (cur_node == nullptr) {
            return 0;
        }
        int moves = dfs(cur_node->left, cur_node) + dfs(cur_node->right, cur_node);
        int from_this = cur_node->val - 1;
        parent->val += from_this;
        moves += abs(from_this);
        return moves;
    }
};