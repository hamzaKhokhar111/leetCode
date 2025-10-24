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
    vector<vector<int>> ans;
    vector<int> path;

    void dfs(TreeNode* node, int remaining) {
        if (node == nullptr) return;

        path.push_back(node->val);
        remaining -= node->val;

        // check if leaf
        if (node->left == nullptr && node->right == nullptr && remaining == 0) {
            ans.push_back(path);
        }
        
        dfs(node->left, remaining);
        dfs(node->right, remaining);

        path.pop_back(); // backtrack
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        dfs(root, targetSum);
        return ans;
    }
};
