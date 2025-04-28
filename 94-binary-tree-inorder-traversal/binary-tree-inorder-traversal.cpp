class Solution {
public:
    vector<int> result;  // Make it a member so helper can access

    void inorder(TreeNode* root) {
        if (root) {
            inorder(root->left);
            result.push_back(root->val); // store value instead of printing
            inorder(root->right);
        }
    }

    vector<int> inorderTraversal(TreeNode* root) {
        inorder(root);
        return result;
    }
};
