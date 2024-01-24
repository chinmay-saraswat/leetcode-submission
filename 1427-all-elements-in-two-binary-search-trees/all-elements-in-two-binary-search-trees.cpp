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
    void inorder(TreeNode* root, vector<int>& in) {
        if (root == NULL) {
            return;
        }
        inorder(root->left, in);
        in.push_back(root->val);
        inorder(root->right, in);
    }
    vector<int> mergearrays(vector<int>& in1, vector<int>& in2) {
        vector<int> ans(in1.size() + in2.size());
        int i = 0, j = 0;
        int k = 0;
        while (i < in1.size() && j < in2.size()) {
            if (in1[i] < in2[j]) {
                ans[k++] = in1[i];
                i++;
            } else {
                ans[k++] = in2[j];
                j++;
            }
        }
        while (i < in1.size()) {
            ans[k++] = in1[i];
            i++;
        }
        while (j < in2.size()) {
            ans[k++] = in2[j];
            j++;
        }
        return ans;
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> bst1, bst2;
        inorder(root1, bst1);
        inorder(root2, bst2);
        vector<int> mergedarray = mergearrays(bst1, bst2);
        return mergedarray;
    }
};