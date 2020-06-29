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
    int goDeep(TreeNode* node, int sum) {
        if(!node)
            return 0;
        int tsum = sum*10 + node->val;
        if(!(node->left || node->right))
            return tsum;
        return goDeep(node->left, tsum) + goDeep(node->right, tsum);
    }
    
    int sumNumbers(TreeNode* root) {
        return goDeep(root, 0);
    }
};