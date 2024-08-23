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
    void dfs(TreeNode* root,string path,vector<string>&paths){
        if(root==NULL){
            return;
        }
        
        path+=to_string(root->val);
        if(root->left==nullptr&&root->right==nullptr){
            paths.push_back(path);
        }else{
            path+="->";
            dfs(root->left,path,paths);
            dfs(root->right,path,paths);
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>paths;
        dfs(root,"",paths);
        return paths;
    }
};