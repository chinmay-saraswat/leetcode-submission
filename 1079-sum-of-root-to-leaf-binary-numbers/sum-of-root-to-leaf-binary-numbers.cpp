class Solution {
private:
    void solve(TreeNode* root, int& ans, int num) {
        // base case
        if (root == NULL) {
            return;
        }

        if (root->left == NULL && root->right == NULL) {
            num = (num << 1) + root->val;
            ans += num;
            return;
        }

        // preorder traversal
        num = (num << 1) + root->val;

        solve(root->left, ans, num);
        solve(root->right, ans, num);
    }

public:
    int sumRootToLeaf(TreeNode* root) {
        int ans = 0;
        int num = 0;
        solve(root, ans, num);
        return ans;
    }
};
