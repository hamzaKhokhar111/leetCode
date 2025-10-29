class Solution {
public:
    int prevVal = -1, ans = INT_MAX;
    
    void inorder(TreeNode* root){
        if(!root) return;
        inorder(root->left);
        if(prevVal != -1) ans = min(ans, root->val - prevVal);
        prevVal = root->val;
        inorder(root->right);
    }
    
    int minDiffInBST(TreeNode* root) {
        inorder(root);
        return ans;
    }
};
