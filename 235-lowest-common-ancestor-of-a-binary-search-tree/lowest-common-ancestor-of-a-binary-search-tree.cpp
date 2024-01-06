/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // basecase
        if (root == NULL) {
            return NULL;
        }
        if (root->val == p->val || root->val == q->val) {
            return root;
        }

        TreeNode* leftans = lowestCommonAncestor(root->left, p, q);
        TreeNode* rightans = lowestCommonAncestor(root->right, p, q);

        if (rightans != NULL && leftans != NULL) {
            return root;
        } 
        else if (rightans == NULL && leftans != NULL) {
            return leftans;
        } 
        else if (rightans != NULL && leftans == NULL) {
            return rightans;
        } 
        else
            return NULL;
    }
};