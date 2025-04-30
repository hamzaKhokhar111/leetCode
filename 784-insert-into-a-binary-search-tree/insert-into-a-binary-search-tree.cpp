class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        // Agar root null hai to new node bana ke return karo
        if (root == nullptr) {
            return new TreeNode(val);
        }

        // Val chota hai to left mein insert karo
        if (val < root->val) {
            root->left = insertIntoBST(root->left, val);
        }
        // Val bada hai to right mein insert karo
        else {
            root->right = insertIntoBST(root->right, val);
        }

        return root; // root unchanged return karo
    }
};
