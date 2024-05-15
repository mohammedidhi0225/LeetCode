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
    void swapTree(TreeNode* root ){
        if(!root) return;
        swap(root->left,root->right);
        swapTree(root->left);
        swapTree(root->right);
    }
    TreeNode* invertTree(TreeNode* root) {
       if(!root)  return root;
       swapTree(root);
       return root;
    }
};