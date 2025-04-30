class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        // Base case: agar node null hai ya value mil gayi
        if (root == nullptr || root->val == val) {
            return root;
        }

        // Agar val choti hai to left mein dhoondo
        if (val < root->val) {
            return searchBST(root->left, val);
        }

        // Agar val badi hai to right mein dhoondo
        return searchBST(root->right, val);
    }
};
