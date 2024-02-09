/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool isequal(TreeNode* root1, TreeNode* root2) {
        if (root1 && root2) // if both nodes are not null
        {
            if (root1->val == root2->val) // If siblings are same
            {
                bool check1 = isequal(root1->left, root2->right);
                bool check2 = isequal(root1->right, root2->left);
                if (check1 == true && check2 == true) {
                    return true;
                }
            } else {
                return false;
            }
        }
        if (!root1 && !root2) // if both are null
        {
            return true;
        }
        return false; // if one is null but other is not null then return false
    }
    bool isSymmetric(TreeNode* root) {

        return isequal(root->left, root->right);
    }
};