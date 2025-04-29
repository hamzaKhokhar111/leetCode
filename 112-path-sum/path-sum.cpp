/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        // Base case: If the root is null, no path exists
        if (root == nullptr) {
            return false;
        }

        // Check if it's a leaf node and if the remaining sum matches the node's value
        if (root->left == nullptr && root->right == nullptr && root->val == targetSum) {
            return true;
        }

        // Recursively check the left and right subtrees
        bool leftPath = hasPathSum(root->left, targetSum - root->val);
        bool rightPath = hasPathSum(root->right, targetSum - root->val);

        // Return true if either left or right subtree has a valid path
        return leftPath || rightPath;
    }
};