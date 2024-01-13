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
    void createmapping(vector<int>& inorder, map<int, int>& nodetoindex,
                       int n) {
        for (int i = 0; i < n; i++) {
            nodetoindex[inorder[i]] = i;
        }
    }
    TreeNode* solve(vector<int>& inorder, vector<int>& preorder, int& index,
                    int inorderstart, int inorderend, int n,
                    map<int, int>& nodetoindex) {
        if (index >= n || inorderstart > inorderend) {
            return NULL;
        }
        int element = preorder[index++];
        TreeNode* root = new TreeNode(element);
        int position = nodetoindex[element];

        root->left = solve(inorder, preorder, index, inorderstart, position - 1,
                           n, nodetoindex);
        root->right = solve(inorder, preorder, index, position + 1, inorderend,
                            n, nodetoindex);
        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = inorder.size();
        int preorderindex = 0;
        map<int, int> nodetoindex;
        createmapping(inorder, nodetoindex, n);
        TreeNode* ans =
            solve(inorder, preorder, preorderindex, 0, n - 1, n, nodetoindex);
        return ans;
    }
};