class Solution {
public:
    int checkBalanced(TreeNode* root) {
        if(!root) return 0;

        int left = checkBalanced(root->left);
        if(left == -1) return -1;

        int right = checkBalanced(root->right);
        if(right == -1) return -1;

        if(abs(left - right) > 1) return -1;

        return max(left, right) + 1;
    }

    bool isBalanced(TreeNode* root) {
        return checkBalanced(root) != -1;
    }
};
